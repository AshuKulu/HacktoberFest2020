print("r-1's compliment of any base till HEXA")
i= input("enter a no.")
r=int(input("enter base :"))
j=0
length=len(i)
while(j < length):
    k=i[j]
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
    else:   
        k =int(k)
    d= (r-1) - k
    if(d==10):
        d='A'
    elif(d==11):
        d='B'
    elif(d==12):
        d='C'
    elif(d==13):
        d='D'
    elif(d==14):
        d='E'
    elif(d==15):
        d='F'
    else:
        d=str(d)
    print(d,end='')
    j+= 1
