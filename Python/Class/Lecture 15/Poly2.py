class A:
    def fun(self):
        print("This is class A.")

class B(A):
    def fun(self):
        super().fun()
        print("This is class B.")

class D(A):
    def fun(self):
        super().fun()
        print("This is class D.")

class C(D,B):
    def fun(self):
        super().fun()
        print("This is class C.")

obj = C()
obj.fun()