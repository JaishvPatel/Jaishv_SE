def perfect(n):
    sum = 0
    for i in range(1, n):
        if n%i==0:
            sum += i
    return sum

n = int(input("Enter a number: "))
n1= perfect(n)
if n1==n:
    print("This is a perfect number.")
else:
    print("This is not a perfect number.")