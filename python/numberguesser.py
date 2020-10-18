#guessthenumber

import random
print("Welcome to Guess the Number v1.2!")

#Release notes 1.0: guess a number between 1 and 100
#Release notes 1.1: Difficulty Level added, three levels of difficulty,
#1-5, 1-10, 1-100
#Release notes 1.2: If invaild difficulty is an input, program will return
#"Sorry, please enter a vaild choice of difficulty."


input1 = input("Choose a difficulty: Easy, Medium, Hard.")

if input1 == ("Easy"):
    input2 = int(input("Enter a number between 1 and 5!"))
    random_number = random.randint(1, 5)
    if input2 != random_number:
            print("Sorry, you're wrong.")
    else:
        print("Wow, you nailed it!")

elif input1 == ("Medium"):
    input3 = int(input("Enter a number between 1 and 10!"))
    random_number2 = random.randint(1, 10)
    if input3 != random_number2:
        print("Sorry, you're wrong.")
    else:
        print("Wow, you nailed it!")

elif input1 == ("Hard"):
    input4 = int(input("Enter a number between 1 and 100!"))
    random_number3 = random.randint(1, 100)
    if input4 != random_number3:
            print("Sorry, you're wrong.")
else:
    print("Sorry, please enter a valid choice of difficulty.")
