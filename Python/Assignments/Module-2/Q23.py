s=input("Enter a string : ")
n=len(s)
a=int(n/2)
b=int((n+1)/2)
s1=input("Enter another string to add : ")
if (n%2==0):
    for i in range (a):
        print(s[i],end="")
    print(s1,end="")
    for i in range (a,n):
        print(s[i],end="")
else:
    for i in range (b):
        print(s[i],end="")
    print(s1,end="")
    for i in range (b,n):
        print(s[i],end="")