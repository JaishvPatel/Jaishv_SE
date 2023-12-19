l=[]
ev=[]
odd=[]

for i in range (1,31):
    l.append(i)

print(l)

for i in l:
    if i%2==0:
        ev.append(i)
    else:
        odd.append(i)

print(ev)
print(odd)