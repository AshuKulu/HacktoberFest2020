def factorial(n):
    # create the following base case
    if n == 0 or n== 1:
        return 1 
    else: 
        return n * factorial(n-1)

def factorial_with_loop (n):
     if n == 1 or n== 0:
         return 1
     else:
         i = 1
         while n > 0:
             i *= n
             n -= 1
         return i

# test the following functions
print(factorial(3))
print(factorial_with_loop(3))


