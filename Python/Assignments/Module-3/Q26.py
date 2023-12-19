t=(1,2,3,4,'prashant','jaishv',1,2,'prashant')
l=[]
l1=[]
for i in t:
    if i not in l1:
        l1.append(i)
    else:
        l.append(i)
t1=tuple(l)
print("The repeated values are : ",t1)