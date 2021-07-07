# Python Program to find Factorial of a Number entered by User

number = int(input("* Enter a Number : "))
factorial = 1

if number < 0:
    print("Factorial doesn't exist for NEGATIVE Numbers.")
elif number == 0:
    print("Factorial of 0 is 1")
else:
    for i in range(1, number + 1):
        factorial = factorial * i
    print("Factorial of " + str(number) + " is = " + str(factorial))
