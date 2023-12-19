# Sorting the dictionary into ascending order

d={7:'jaishv',2:'prashant',4:'darshan',3:'meet'}
l=list(d)
l.sort()
d1=dict.fromkeys(l)
for i in l:
    d1[i]=d.get(i)
print(d1)

# Sorting the dictionary into descending order

d={7:'jaishv',2:'prashant',4:'darshan',3:'meet'}
l=list(d)
l.sort()
l.reverse()
d1=dict.fromkeys(l)
for i in l:
    d1[i]=d.get(i)
print(d1)