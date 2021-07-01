import math as mt
  
MAXN = 1000001  
spf = [0 for i in range(MAXN)] 
  
def sieve(n): 
    spf[1] = 1
    for i in range(2, n+1): 
        spf[i] = i 
    for i in range(4, n+1, 2): 
        spf[i] = 2
    for i in range(3, mt.ceil(mt.sqrt(n+1))): 
        if (spf[i] == i): 
            for j in range(i * i, n+1, i):  
                if (spf[j] == j): 
                    spf[j] = i 
  
def getFactorization(x): 
    ret = list() 
    while (x != 1): 
        ret.append(spf[x]) 
        x = x // spf[x] 
  
    return ret
  
x = 12
sieve(x) 
p = getFactorization(x) 
d = {}  
for i in range(len(p)): 
    if p[i] in d:
        d[p[i]] += 1
    else:
        d[p[i]] = 1
#print(d)
