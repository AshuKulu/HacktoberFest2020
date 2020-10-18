import math

def factors(value):
    factors = []
    for i in range(2, value+1):
        if value % i == 0:          #checking for factors
            if (isprime(i)==True):  #checking if factor is prime with a dedicated function
                factors.append(i)   
    return factors

def isprime(num):
    factor_count=0
    if num == 1:
        raise Exception ("1 is neither prime nor composite")
    elif num<=0 :
        raise Exception ("Only natural numbers allowed")
    for i in range(1, math.floor(math.sqrt(num))+1, 1):
        if num%i == 0:
            factor_count+=1
    
    if factor_count > 1:
        return False
    return True
