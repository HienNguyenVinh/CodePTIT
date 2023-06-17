def handle():
    s1 = 0
    s2 = 0
    global n, k
    if k > n-k:
        k = n-k
    for i in range(n):
        a[i] = int(a[i])
        if i<k:
            s1 += a[i]
        else:
            s2 += a[i]
    print(s2 - s1)

t = int(input())
for i in range(t):
    global n, k, a
    n, k = input().split()
    n = int(n)
    k = int(k)
    a = list(map(int, input().split()))
    a.sort()
    handle()