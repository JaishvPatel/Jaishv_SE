from abc import ABC,abstractmethod

class Vehicles(ABC):
    def wheels(self):
        pass
    def color(self):
        pass

class Car(Vehicles):
    def wheels(self):
        return 4
    def color(self):
        return "Red"
    
class Bike(Vehicles):
    def wheels(self):
        return 2
    def color(self):
        return "Black"
    
class Truck(Vehicles):
    def wheels(self):
        return 8
    def color(self):
        return "White"
    
obj = Car()
print("Car has ",obj.wheels()," wheels.")
print("Car has ",obj.color()," color.")

obj1 = Bike()
print("Bike has ",obj1.wheels()," wheels.")
print("Bike has ",obj1.color()," color.")

obj2 = Truck()
print("Truck has ",obj2.wheels()," wheels.")
print("Truck has ",obj2.color()," color.")