import random
import math


x = random.randint(1, 10)
noofguess = 3
print("you have " + noofguess + " guesses :D")
 

 

while noofguess > 0:

     
    guess = int(input("Guess a number:- "))
    if x == guess:  
       print("Congratulations you killed it damn ")
       break
       
    elif x > guess:
       print("You guessed too small!")
    elif x < guess:
       print("You Guessed too high!")
     noofguess -= 1 
 
if noofguess == 0:
   print("The number is" + x)
   print("wow you suck")
   print("im kidding good luck next time :)")
