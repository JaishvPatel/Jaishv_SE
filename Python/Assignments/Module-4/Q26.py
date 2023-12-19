# Example of inheritance in python

class A:
    def display(self):
        print("This is class A.")

class B(A):
    def display1(self):
        print("This is class B.")

obj = B()
obj.display()
obj.display1()