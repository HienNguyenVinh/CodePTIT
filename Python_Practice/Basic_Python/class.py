class helu:
    def __init__(hien, ny, age):            #All classes have a function called __init__(), which is always executed when the class is being initiated.
        hien.name = ny
        hien.tuoi = age
    def __str__(hien):              #The __str__() function controls what should be returned when the class object is represented as a string.
        return f"{hien.name} gap Hien luc {hien.tuoi} tuoi"
    def anyFunction(hien):
        print(hien.name, hien.tuoi)

a = helu('Mai', 20)
print(a)

a.anyFunction()

# Inheritance
class person():
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname
    def __str__(self):
        return f"Xin chao {self.fname} {self.lname}"
class me(person):                                                   #To create a class that inherits the functionality from another class,
    def __init__(self, fname, lname, age):              # send the parent class as a parameter when creating the child class:
        super().__init__(fname, lname)
        self.age = age
    #def __init__(self, abc, xyz):                       When you add the __init__() function, the child class will no longer inherit the parent's __init__() function.
    #    pass
    def printt(self):
        print("My name is", self.fname, self.lname, self.age)

p1 = me('Mai', 'Hien', 20)
print(p1)
p1.printt()
