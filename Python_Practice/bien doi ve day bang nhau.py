n = int(input())
a = list(map(int, input().split()))
min = 1e9
res = 0
for i in range(n):
    s = 0
    for j in range(n):
        s += abs(a[i]-a[j])
    if min > s:
        min = s
        res = a[i]

print(min, res, end= " ")
print()

