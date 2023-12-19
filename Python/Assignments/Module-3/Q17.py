l=[1,2,3,4,"jaishv","prashant"]
l1=[]
l2=[]
for i in l:
    if type(i)==int:
        l1.append(i)
    else:
        l2.append(i)
print(l1)
print(l2)