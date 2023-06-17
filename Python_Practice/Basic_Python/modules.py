import test_module
import platform as plat                          #You can create an alias when you import a module, by using the as keyword:
from test_module import hello                #You can choose to import only parts from a module, by using the from keyword.
a = test_module.hello(10)
b = test_module.mai
print(b)

m = plat.system()
print(m)

# The dir() function can be listed all the function names/ variable names in a module
x = dir(test_module)
print(x)