ll = 10**9 + 7
def handle(n, k):
    if k == 0:
        return 1
    x = handle(n, k//2)
    x = (x * x) % ll
    if k%2 == 1:
        x = (x*n) % ll
    return x

t = int(input())
for i in range(t):
    n, k = input().split()
    n = int(n)
    k = int(k)
    res = handle(n, k)
    print(res)
