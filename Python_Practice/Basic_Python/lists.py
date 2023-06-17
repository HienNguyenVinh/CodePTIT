# List items are ordered, changeable, and allow duplicate values.

a = [1,2,3,4,5]
b = a[-5:-2]

b.insert(6,7)               #chen phan tu vao vi tri chi dinh
a.append("a")               # them phan tu
a.extend(b)                 #noi list/set/dict/tuple b vao list a
a.remove('a')              # xoa phan tu chi dinh
a.pop(2)                    # xoa phan tu theo index -> pop() - xoa phan tu cuoi cung
del a[3]                # tuong tu pop(3)
a.clear()                  # xoa tat ca phan tu

c = [x for x in a if x != 4]                    #List comprehension
d = [x for x in range(2,10,2)]

a.sort()                                #sap xep tang dan
a.sort(reverse = True)              #sap xep giam

def cmp(n):
    return n -100
a.sort(key = cmp)
b.sort(key = str.lower())           #sap xep string

d = a.copy()                            #copy list a