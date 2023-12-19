# This is multiple level inheritance

class Parent:
    def father(self):
        print("I have some properties to give to my son.")
    
class Parent2:
    def uncle(self):
        print("I have some properties to give to my brother's son.")

class Child(Parent,Parent2):
    def son(self):
        print("I will have my father's and uncle's properties.")

obj= Child()
obj.father()
obj.uncle()
obj.son()