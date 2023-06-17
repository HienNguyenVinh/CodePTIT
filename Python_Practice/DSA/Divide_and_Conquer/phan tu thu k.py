def merge(a, b, c):
    i = j = 0
    while i < m and j < n:
        if a[i] < b[j]:
            c.append(a[i])
            i += 1
        else:
            c.append(b[j])
            j += 1
    if i < n:
        c.extend(a[i:])
    if j < m:
        c.extend(b[j:])
t = int(input())
for i in range(t):
    global m, n
    m, n, k = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = []
    merge(a, b, c)
    print(c[k-1])