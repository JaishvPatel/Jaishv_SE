l=[1,2,"prashant","Shukla",True,False,1,1.25,1.90]
"""
l.append(100)  # add value at the end of the list
print(l)

l.clear()  # this create blank list
print(l)

l1=l.copy()  # it will copy the whole list into another list
print(l1)

print(l.count(1)) # it will count the occurences of the particular element

l.extend([10,20,30])  # it will add another list into existing list
print(l)

print(l.index(1.25))

l.insert(3,"Shivam")  # add value at particular index
print(l)

l.pop()  # it removes the last element of the list and if we give argument of particularindex it will remove that
print(l)

l.remove(1.25)  # it will remove that particular value
print(l)

l.reverse()  # it will reverse the list
print(l)
"""
l1=[1,5,7,3,2,4,5]
l1.sort()  # it will sort the list
print(l1)