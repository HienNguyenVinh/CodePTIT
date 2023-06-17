a = 'Hien dep trai vl'
b = '       Hien qua deep try        '

if 'Hien' in a:
    print(1111111)
print(a[2:10])
print(a.upper())
print(b.lower())

print(a.replace('dep trai', 'thong minh'))
print(b.strip())                                    #xoa khoang trang 2 dau

print(a.split(" "))                                 #tach tu theo ky tu

c = 'i luv {} u {}'
print(c.format(100, 3000))                          #them num vao string

'''- capitalize()	Converts the first character to upper case
- title()	Converts the first character of each word to upper case
- count()	Returns the number of times a specified value occurs in a string
- isalpha()	Returns True if all characters in the string are in the alphabet
- isdigit()	Returns True if all characters in the string are digits
- find()	Searches the string for a specified value and returns the position of where it was found
- rfind()	Searches the string for a specified value and returns the last position of where it was found
'''