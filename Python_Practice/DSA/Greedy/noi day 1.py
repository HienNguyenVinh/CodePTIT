def handle():
    global a
    res = 0
    while len(a) >= 2:
        a.sort()
        tmp = a[0]+a[1]
        a = a[2:]
        res += tmp
        a.append(tmp)
    print(res)

t = int(input())
for i in range(t):
    global a, n
    n = int(input())
    a = list(map(int, input().split()))
    handle()