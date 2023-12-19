l=[1,3,5,7,9]
l1=[2,4,6,8]
d=dict.fromkeys(l)
d1=dict.fromkeys(l1)
d.update(d1)
print(d)