# This is hierarchical inheritance

class Parent:
    def father(self):
        print("This is parent class.")

class Child1(Parent):
    def son1(self):
        print("This is Child class 1.")

class Child2(Parent):
    def son2(self):
        print("This is Child class 2.")

obj=Child1()
obj2=Child2()
obj.father()
obj.son1()
obj2.father()
obj2.son2()