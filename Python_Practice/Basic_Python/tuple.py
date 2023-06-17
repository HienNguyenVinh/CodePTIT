# Tuple items are ordered, unchangeable, and allow duplicate values.
# So u can't change/add/remove items from it.
# But u can convert it into a list, add/change/remove items, and convert it back into a tuple

x = ("apple", "banana", "cherry", "strawberry", "raspberry")
y = list(x)
y[1] = "kiwi"
x = tuple(y)
z = x*2                 # nhan doi items

(green, *tropic, red) = x          #unpacking tuple

print(green)
print(tropic)
print(red)

'''count()	Returns the number of times a specified value occurs in a tuple
index()	Searches the tuple for a specified value and returns the position of where it was found
'''