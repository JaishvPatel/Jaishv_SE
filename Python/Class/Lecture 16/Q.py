# prime number

a= int(input("Enter a Number : "))
c=0

if a==1 or a==0:
    print("It is neither prime nor composite number.")
elif a>1:
        for i in range (2,a):
            if a%i==0:
                 c+=1
        if c>1:
             print("It is not a prime number.")
        else:
             print("It is a prime number.")
else:
    print("Invalid Input.")
    print("Please input positive number.")