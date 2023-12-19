d={1:'jaishv',11:'prashant',9:'darshan',2:'meet',7:'dev'}
print("Your dictionary is : ",d)
l=list(d)
l.sort()
l.reverse()
l1=[]
for i in range (3):
    l1.append(l[i])
d1=dict.fromkeys(l1)
for i in d1:
    d1[i]=d.get(i)
print("The three highest values in the dictionary are : ",d1)