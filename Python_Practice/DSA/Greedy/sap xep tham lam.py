def handle():
    b = sorted(a)
    for i in range(n//2):
        if (b[i] != a[i] and b[n-i-1] != a[i]) or (b[n-i-1] != a[n-i-1] and b[n-1-i] != a[i]):
            print("No")
            return
    print("Yes")

t = int(input())
for i in range(t):
    global a, n
    n = int(input())
    a = list(map(int, input().split()))
    handle()