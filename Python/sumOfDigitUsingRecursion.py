
# i/p: 20301
# o/p: 6

def sm(n):
  if n==0:
    return 0
    
  return n%10 + sm(n//10)


print(sm(1050))







