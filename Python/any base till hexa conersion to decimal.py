print("CONVERSION from any base till hexa to decimal")
import math
n=input("enter a no. to convert in decimal system :")
r=int(input("enter the base of the no. :"))
s=0
j=0
ln=len(n)
while(ln>0):
    k=n[j]
    if(k=='A'):
        k=10
    elif(k=='B'):
        k=11
    elif(k=='C'):
        k=12
    elif(k=='D'):
        k=13
    elif(k=='E'):
        k=14
    elif(k=='F'):
        k=15
    d=int(k)
    c=d*math.pow(r,ln-1)
    s+=c
    j+=1
    ln-=1
print("no. in decimal sys. is :- ",int(s))  # externally converting to int type variable s

