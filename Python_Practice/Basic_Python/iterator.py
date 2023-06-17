# String, Lists, tuples, dictionaries, and sets are all iterable objects.
# All these objects have a iter() method which is used to get an iterator:

str = 'Hien iu Mai vl'
a = iter(str)
print(next(a))
print(next(a))
print(next(a))
print(next(a))

# To create an object/class as an iterator you have to implement the methods __iter__() and __next__() to your object.
class per():
    def __init__(self, ten, tuoi):
        self.name = ten
        self.age = tuoi
    def __str__(self):
        return f"{self.name} deep try"
    def __iter__(self):
        self.cnt = 1
        return self
    def __next__(self):
        if self.cnt < 20:
            x = self.cnt
            self.cnt += 1
            return x
        else:
            raise StopIteration

test = per('hien', 20)
print(test)
b = iter(test)
for i in b:
    print(i)
