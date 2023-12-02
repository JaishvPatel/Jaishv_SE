s=input("Enter a string : ")
n=len(s)
if(n>=2):
    print(s[0]+s[1]+s[n-2]+s[n-1])
else:
    print(s)