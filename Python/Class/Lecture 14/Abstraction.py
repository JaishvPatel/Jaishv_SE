from abc import ABC,abstractmethod

class Rbi:
    def roi():
        pass

class Boi(Rbi):
    def roi():
        return 8.5
    
class Kotak(Rbi):
    def roi():
        return 7.5
    
class Sbi(Rbi):
    def roi():
        return 7.0
    
obj=Boi()
print("Rate of Interest of Boi = ",obj.roi())

obj1=Kotak()
print("Rate of Interest of Kotak : ",obj1.roi())

obj2=Sbi()
print("Rate of Interest of Sbi : ",obj.roi())