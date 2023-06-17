s = set()
def out(b, len):
    m = ""
    for x in range(len):
        m = m + str(b[x]) + " "
    s.add(m)
def test(a, b, n, start, len):
    if len > 1:
        ok = True
        for i in range(len-1):
            if b[i] > b[i+1]:
                ok = False
                break
        if ok:
            out(b, len)
    if len == n or start == n:
        return
    b[len] = a[start]
    test(a, b, n, start+1, len+1)
    test(a, b, n, start+1, len)
n = int(input())
a = list(map(int, input().split()))
b = [0]*n
test(a, b, n, 0, 0)
for x in sorted(s):
    print(x)