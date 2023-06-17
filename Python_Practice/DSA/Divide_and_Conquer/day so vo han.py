mod = int(1e9 + 7)

def Mul(a, b):
    x = ((a[0][0] * b[0][0]) % mod + (a[0][1] * b[1][0]) % mod) % mod
    y = ((a[0][0] * b[0][1]) % mod + (a[0][1] * b[1][1]) % mod) % mod
    z = ((a[1][0] * b[0][0]) % mod + (a[1][1] * b[1][0]) % mod) % mod
    t = ((a[1][0] * b[0][1]) % mod + (a[1][1] * b[1][1]) % mod) % mod
    a[0][0] = x
    a[0][1] = y
    a[1][0] = z
    a[1][1] = t
def Pow(a, n):
    if n <= 1:
        return
    Pow(a, n//2)
    Mul(a, a)
    if n % 2 == 1:
        Mul(a, b)
def handle():
    n = int(input())
    global b
    a = [[1, 1], [1, 0]]
    b = [[1, 1], [1, 0]]
    Pow(a, n-1)
    print(a[0][0])
t = int(input())
for _ in range(t):
    handle()