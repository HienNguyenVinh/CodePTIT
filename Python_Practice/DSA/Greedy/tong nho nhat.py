def test():
    global a, n
    odd = 0
    even = 0
    for i in range(n):
        a[i] = int(a[i])
        if i % 2 == 0:
            even = even*10 + a[i]
        else:
            odd = odd*10 + a[i]
    print(even + odd)

t = int(input())
for i in range(t):
    global n
    n = int(input())
    global a
    a = input().split()
    a.sort()
    test()