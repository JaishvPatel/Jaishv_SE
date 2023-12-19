# This is hybrid inheritance

class Grandparent:
    def A(self):
        print("This is A class.")

class Parent(Grandparent):
    def B(self):
        print("This is B class.")

class Mama:
    def D(self):
        print("This is D class.")

class Child(Parent,Mama):
    def C(self):
        print("This is C class.")

obj=Child()
obj.A()
obj.B()
obj.D()
obj.C()