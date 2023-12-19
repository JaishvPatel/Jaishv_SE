l=[]
for i in range (1,31):
    l.append(i**2)

l1 = l[:5] + l[-5:]
print(l1)