def init():
    global f
    f = [0] * 93
    f[1] = 1
    f[2] = 1
    for i in range(3, 93):
        f[i] = f[i - 1] + f[i - 2]

def handle():
    global n, k, f
    while 1:
        if n == 1:
            return 0
        elif n == 2:
            return 1
        else:
           if k > f[n-2]:
               k -= f[n-2]
               n -= 1
           else:
               n -= 2

t = int(input())
init()
for _ in range(t):
    global n, k
    n, k = list(map(int, input().split()))
    res = handle()
    print(res)