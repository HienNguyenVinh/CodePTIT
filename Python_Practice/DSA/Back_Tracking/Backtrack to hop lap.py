def out(a, k):
    for i in range(1,k+1):
        print(chr(a[i] + ord('A')), end='')
    print()
def tohop(a, n, k, i):
    for j in range(a[i-1], n+1, 1):
        a[i] = j
        if i == k:
            out(a, k)
        else:
            tohop(a, n, k, i+1)

c, k = input().split()
k = int(k)
a = []
n = ord(c) - ord('A')
for i in range(k+1):
    a.append(0)
tohop(a, n, k, 1)
