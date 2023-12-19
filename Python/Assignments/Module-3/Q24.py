t=('prashant','jaishv','meet','darshan')
l=[]
count=0
for i in t:
    count+=1
for i in range (count-1,-1,-1):
    l.append(t[i])
t=tuple(l)
print(t)