mod = int(1e9 + 7)

def Pow(a, b):
    if b == 0:
        return 1
    x = Pow(a, b//2)
    if b % 2 == 1:
        return (((x * x) % mod) * a) % mod
    else:
        return (x * x) % mod

ok = True
while ok:
    a, b = map(int, input().split())
    if a == b and b == 0:
        ok = False
    else:
        res = Pow(a, b)
        print(res)