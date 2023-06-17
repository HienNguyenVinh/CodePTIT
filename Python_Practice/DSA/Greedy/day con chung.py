def handle():
    i1 = i2 = i3 = 0
    cnt = 0
    while i1 < n and i2 < m and i3 < k:
        if a[i1] == b[i2] and a[i1] == c[i3]:
            print(a[i1], end=" ")
            i1 += 1
            i2 += 1
            i3 += 1
            cnt += 1
            continue
        if a[i1] < b[i2]:
            i1 += 1
        elif b[i2] < c[i3]:
            i2 += 1
        else:
            i3 += 1
    if cnt == 0:
        print("NO")
    print()

t = int(input())
for i in range(t):
    global a, b, c
    global n, m , k
    n, m, k = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    handle()