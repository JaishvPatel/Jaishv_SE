# Function with parameter and without return type

def myfun(n):
    fact=1
    for i in range (1,n+1):
        fact*=i

    print(fact)

n=int(input("Enter a number : "))
myfun(n)