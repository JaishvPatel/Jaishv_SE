n=int(input("Enter a number : "))
sum=0
for i in range (1,n):
    if n%i==0:
        sum+=i
print("The sum of all divisors of the number is : ",sum)