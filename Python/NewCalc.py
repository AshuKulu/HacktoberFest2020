def calc(n):

    s=0

    p=1

    a=int(input("first number"))

    b=int(input("second number"))

    if n==1:

        s=a+b

        print("sum",s)

    elif n==2:

        p=a*b

        print("prod",p)

    elif n==3:

        s=a-b

        print("diff",s)

    else:

        p=a/b

        print("divide",p)

i=int(input("enter for calculation 1. add 2. product 3.subtract 4.divide"))

calc(i)
