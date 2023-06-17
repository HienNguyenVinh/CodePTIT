n, Sum = 0, 0
a = [0]
stop = False

def test(i, s):
    global stop
    if i == n-1 or stop or s == Sum // 2:
        if s == Sum // 2:
            stop = True
        return
    if s + a[i] <= Sum//2:
        test(i+1, s+a[i])
    test(i+1, s)
t = int(input())
for _ in range(t):
    #global n, a, Sum, stop
    n = int(input())
    stop = False
    a = list(map(int, input().split()))
    Sum = sum(a)
    if Sum % 2 == 0:
        test(0, 0)
    print("YES" if stop else "NO")