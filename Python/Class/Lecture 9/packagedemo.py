def fac():
    n=int(input("Enter a number : "))
    fact=1
    for i in range (1,n+1):
        fact*=i
    print("Factorial of ",i," is : ",fact)

def add():
    n=int(input("Enter a number : "))
    n1=int(input("Enter another number : "))
    print("The addition of two numbers is : ",n+n1)
    
def sub():
    n=int(input("Enter a number : "))
    n1=int(input("Enter another number : "))
    print("The subtraction of two numbers is : ",n-n1)
    
def mul():
    n=int(input("Enter a number : "))
    n1=int(input("Enter another number : "))
    print("The multiplition of two numbers is : ",n*n1)
    
def div():
    n=int(input("Enter a number : "))
    n1=int(input("Enter another number : "))
    print("The division of two numbers is : ",n/n1)