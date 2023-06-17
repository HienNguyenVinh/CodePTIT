
n = int(input())
a = list(map(int, input().split()))
a.sort()
b = []
b.append(a[0]*a[1])
b.append(a[n-2]*a[n-1])
b.append(a[n-3] * a[n-2] * a[n-1])
b.append(a[0] * a[1] * a[n-1])
b.sort(reverse= True)
print(b[0])