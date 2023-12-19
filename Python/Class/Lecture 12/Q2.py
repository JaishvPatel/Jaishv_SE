s=input("Enter a string : ")
if len(s)>=3:
    if s[-3:]=="ing":
        print(s+'ly')
    else:
        print(s+'ing')
else:
    print(s)