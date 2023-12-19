class Parent:
    def car(self):
        print("My father has a Mercedes.")

    def dict(self):
        l=[1,2,3]
        l1=[5,6,7]
        d={}
        for i in range (len(l)):
            d[l[i]]=l1[i]
        print(d)

class Child(Parent):
    def car1(self):
        print("I have no car but my father is so rich.")

    def occurence(self):
        s=input("Enter a string : ")
        d={}
        for i in s:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        print(d)

obj=Child()
obj.car1()
obj.car()
obj.dict()
obj.occurence()