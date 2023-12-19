def fact():
    n=int(input("Enter a number whose factorial who want : "))
    fac=1
    for i in range (1,n+1):
        fac*=i
    print("The factorial of ",i," is : ",fac)

fact()