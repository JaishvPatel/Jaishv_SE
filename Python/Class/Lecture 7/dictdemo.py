d={101:"Prashant",104:"Jaishv",109:"Tops",112:"Technologies"}

print(d.get(104))  # get value of particular key
print(d.items())  # print dictionary in tuple->list->tuple
print(d.keys())  # prints the keys of the dictionary
d.pop(104)  # this removes the specific key-value pair
print(d)
d.popitem()  # this removes the last key-value pair
print(d)

print(d.values())  # this show values of dictionary
d.update({119:"Shivam",122:"Randeep"})   # this will add another dictionary
print(d)

t=[1,2,3,4]
dict = dict.fromkeys(t)  # with this, we can convert either list or tuple into dictionary
print(dict)
bike = {1:"color",2:"name",3:"brand"}
bike1 = bike.setdefault({4:"model"})  # appends a key-value pair in the existing dictionary
print(bike1)
print(bike)