l=[1,2,3,4,1,2]
l1=[]
for i in l:
    if i not in l1:
        l1.append(i)
d=dict.fromkeys(l1)
print(d)