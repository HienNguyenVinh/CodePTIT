n = int(input())
#A lambda function can take any number of arguments, but can only have one expression.
x = lambda a,b : (a+b)*n
print(x(2,3))

def multiple(m):
    return lambda a : a*m

double = multiple(2)
triple = multiple(3)
print(double(10), triple(20))