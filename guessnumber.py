import random
n = random.randint(0,100)
print(n)
score = 0
a = int(input("guess a number: "))
while a != n:
    score += 1
    if a > n:
        if (a-n) > 10:
            print("too larger than n guess more less")
        else:
            print("larger than n and guess something less")
    else:
        if (n-a) > 10:
            print("too smaller than n guess a greater")
        else:
            print("smaller than n and guess something less")
    a = int(input("Guess another number: "))
print("You Win!!!")
print(f"Your score: {score+1}")
