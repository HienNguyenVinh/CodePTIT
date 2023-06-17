n, k = input().split()
n = int(n)
k = int(k)
a = list(map(int, input().split()))
b = [float('inf')] * n
cnt = 0

def solve(a, b, n, k):
    s = 0
    global cnt
    for i in range(n):
        a[i] = int(a[i])
        s += a[i]*b[i]
    if s == k:
        for i in range(n):
            if b[i]:
                print(a[i], end=" ")
        cnt += 1
        print()

def test(i, n, k ,a):
    for j in range(2):
        b[i] = j
        if i == n-1:
            solve(a, b, n, k)
        else:
            test(i+1, n, k, a)
test(0, n, k, a)
print(cnt)