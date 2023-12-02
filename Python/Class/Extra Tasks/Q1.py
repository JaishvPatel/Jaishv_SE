s=input("Enter a string : ")
n=len(s)
a=int(n/2)
b=int((n-1)/2)
if n>4:
    if(n%2==0):
        for i in range (a-1,a+2):
            print(s[i],end="")
    else:
        for i in range (b-1,b+2):
            print(s[i],end="")