n=int(input())
a= list(map(int, input().split()))

h=max(a)
k=min(a)
tb=(h+k)/2
b=[]
for i in range(n):
    b.append(abs(tb-a[i]))
x=min(b)+tb
print(b)
print(tb, x)

''''''
if h-x>x-k:
    print(h-x, x)
else:
    print(x-k, x)
''''''