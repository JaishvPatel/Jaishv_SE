def myfun(s):
    n=len(s)

    if(n%4==0):
        print(s[::-1])
    else:
        print(s)

s=input("Enter a string : ")
myfun(s)