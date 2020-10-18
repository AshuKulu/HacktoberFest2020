
# Program 10
# Write a program that will prompt for the input of two integer values. Then using the bitwise shift operators show the result of
# a.	Left shifting the first number by the second
# b.	Right shifting the first number by the second
# c.	Exclusive OR of the first number by the second bitwise
# d.	OR of the first number by the second bitwise
# e.	AND of the first number by the second bitwise.



rep="y"
while rep=="y":
        m=int(input("enter first decimal number"))
        n=int(input("enter second decimal number"))
        print ("enter 1 for Left Shift\nenter 2 for Right Shift\nenter 3 for exclusive OR\nenter 4 for OR\nenter 5 for AND")
        ch=int(input("enter your choice"))
        if ch==1:
                ans=m<<n
                print("Left Shifting of",m,"of",n,"times is",ans)
        elif ch==2:
                ans=m>>n
                print("right Shifting of",m,"of",n,"times is",ans)
        elif ch==3:
                ans=m^n
                print("exclusive OR of",m,"and",n,"is",ans)
        elif ch==4:
                ans=m|n
                print("OR of",m,"and",n,"is",ans)
        elif ch==5 :
                ans=m&n
                print("AND of",m,"and",n,"is",ans)
        else:
                print("enter only 1 to 5 only ")
        rep=input("enter y for continue")
