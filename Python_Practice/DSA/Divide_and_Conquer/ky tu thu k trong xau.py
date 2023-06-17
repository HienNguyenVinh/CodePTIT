def init():
    global f
    f = [2**i for i in range(26)]

def handle(n, k):
    while 1:
        if k == f[n-1]:
            return n-1
        elif k > f[n-1]:
            k -= f[n-1]
            n -= 1
        else:
            n -= 1

init()
t = int(input())
for _ in range(t):
    n, k = list(map(int, input().split()))
    res = handle(n, k)
    print(chr(res + ord("A")))