l=[(1,2),(),(1,3,5,7,9),(),('prashant','jaishv'),(),(1,3,5,'darshan')]
for i in l:
    if len(i)==0:
        l.remove(i)
print(l)