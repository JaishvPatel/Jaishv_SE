# Control Statement
"""

1) Break
2) Continue
3) Pass

"""

# Break

for i in range (1,11):
    if i==5:
        break
    print(i)

# Continue

for i in range (1,11):
    if i==5:
        continue
    print(i)

# Pass

n=int(input("Enter th number : "))

if n%2==0:
    pass
else:
    print("This is an odd number.")