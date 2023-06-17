import bisect

def check(x, y, m, tmp):
    if x == 0:
        return 0
    if x == 1:
        return tmp[0]
    idx = bisect.bisect_right(y, x)
    ans = m - idx
    ans += tmp[0] + tmp[1]
    if x == 2:
        ans -= tmp[3] + tmp[4]
    if x == 3:
        ans += tmp[2]
    return ans

t = int(input())
for _ in range(t):
    n, m = list(map(int, input().split()))
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))
    tmp = [0] * 5
    for i in range(m):
        if y[i] < 5:
            tmp[y[i]] += 1
    y.sort()
    ans = 0
    for a in x:
        ans += check(a, y, m, tmp)
    print(ans)