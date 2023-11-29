# With temp variable

a=int(input("Enter the first number = "))
b=int(input("Enter the second number = "))

c=a+b
a=c-a
b=c-a

print(a,end=" ")
print(b)

#without temp variable

a,b=b,a

print(a,end=" ")
print(b)