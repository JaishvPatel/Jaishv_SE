# This is multilevel inheritance

class Grandfather:
    def display(self):
        print("I have some properties to give to my son.")
    
class Parent(Grandfather):
    def father(self):
        print("I also have some properties to give to my son.")

class Child(Parent):
    def son(self):
        print("I will have my father's and grandfather's properties.")

obj= Child()
obj.display()
obj.father()
obj.son()