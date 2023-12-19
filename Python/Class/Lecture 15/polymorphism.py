# This is method overriding

class A:
    def fun(self):
        super().fun()
        print("This is class A.")

class B:
    def fun(self):
        print("This is class B.")

class C(A,B):
    def fun(self):
        super().fun()
        print("This is class C.")

obj = C()
obj.fun()