#Get data
df <- read.csv("student-mat.csv" ,  sep = ';')
head(df, n= 5)

#Clean Data 
any(is.na(df))  #checking for null values
str(df)

#Exploratory Data Analysis
library(ggplot2)
library(ggthemes)
library(dplyr)
library("corrgram")

num.cols <- sapply(df, is.numeric)
cor.data <- cor(df[,num.cols])
cor.data

corrplot(cor.data , method = 'color')
ggplot(df,aes(x=G3)) + geom_histogram(bins = 20 , alpha = 0.5 ,fill ="blue") #since we're predicting G3
       
#Split into train-test data
install.packages('caTools')
library(caTools)
set.seed(101)
sample <- sample.split(df$G3,SplitRatio = 0.7)
train <- subset(df,sample == TRUE)
test<-subset(df,sample == FALSE)

#Train and build model
model <- lm(G3 ~. , train)
summary (model)
  
#Predict model
G3.predictions <- predict(model,test)
results <- cbind(G3.predictions,test$G3)
colnames(results) <- c('predicted','actual')
results <- as.data.frame(results)
head(results)

#Taking care of negative values
to_zero <- function(x){
  if(x<0) {
    return(0)
  }else{
    return(x)
  }
}
results$predicted <- sapply((results$predicted) , to_zero)

#Mean Squared Error
mse <- mean((results$actual- results$predicted)^2)
mse

rms <- (mse ^ 0.5)
rms

##########
SSE <- sum((results$predicted - results$actual)^2)
SST <- sum( (mean(df$G3) - results$real)^2)

R2 <- 1 - SSE/SST
R2
