a = [0 for i in range(11)]
vs = [True for i in range(11)]

def solve():
    global a, n
    for i in range(1, n):
        if abs(a[i] - a[i+1]) == 1:
            return
    for i in range(1, n+1):
        print(a[i], end="")
    print()
def test(i):
    global a, n, vs
    for j in range(1, n+1):
        if vs[j]:
            vs[j] = False
            a[i] = j
            if i == n:
                solve()
            else:
                test(i+1)
            vs[j] = True

t = int(input())
for i in range(t):
    global n
    n = int(input())
    test(1)
    print()