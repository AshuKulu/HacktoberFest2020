# Taking the input from the user
txt = str(input("Enter the text you want to reverse: "))
# Reversing the string using slicing txt[(start):(stop)(:step)]
a = txt[::-1]
print("Reversed text is:" + a)
