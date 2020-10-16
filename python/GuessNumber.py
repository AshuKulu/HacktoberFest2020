import random

print("Hola! What's your name?")
name = input()
print("Nice to meet you ! ", name, "Let's play a game !")
print("I will think a number between 1 and 20 and you have to guess it within 6 trials!")
number = random.randint(1, 20)
guess = 0
while (guess < 6):
    print("Take a guess !")
    gno = int(input())
    guess = guess + 1
    if (gno < number):
        print("WRONG!!! Your guess is lower than the number")
    if (gno > number):
        print("WRONG!!! Your guess is higher than the number")
    if (gno == number):
        break;
if (gno == number):
    print("WELL DONE!! ", name, " You guessed the right number in ", guess, " trials")
else:
    print("OOPS!!You ran out of trials....The correct number is ", number)
