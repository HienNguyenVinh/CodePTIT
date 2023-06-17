MOD = 10**9 + 7

def Mul(a, b):
    n = len(a)
    c = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                c[i][j] += a[i][k] * b[k][j]
                c[i][j] %= MOD
    for i in range(n):
        for j in range(n):
            a[i][j] = c[i][j]

def Pow(a, k):
    if k == 1:
        return
    Pow(a, k // 2)
    Mul(a, a)
    if k % 2 == 1:
        Mul(a, d)

def testCase():
    n, k = map(int, input().split())
    a = [list(map(int, input().split())) for _ in range(n)]
    global d
    d = [row[:] for row in a]
    Pow(a, k)
    ans = sum(a[i][n-1] for i in range(n)) % MOD
    print(ans)

T = int(input())
for _ in range(T):
    testCase()
    print()
