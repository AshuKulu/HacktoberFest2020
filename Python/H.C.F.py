# program to find H.C.F of two numbers
def compute_hcf(num1, num2):            #defining the function

#choosing smaller number
    if (num1 > num2):
        smaller = num2
    else:
        smaller = num1
    for i in range(1, smaller+1):
        if((num1 % i == 0) and (num2 % i == 0)):
            hcf = i 
    return hcf                          #returning the output

num1 = 54 
num2 = 24

print("The H.C.F. is", compute_hcf(num1, num2))
