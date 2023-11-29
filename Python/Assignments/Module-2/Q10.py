n1=int(input("Enter the number : "))
n2=int(input("Enter the number : "))
c=n1+n2
if(n1>n2):
    d=n1-n2
else:
    d=n2-n1
if(n1==n2 or c==5 or d==5):
    print("True")
else:
    print("False")