

t = int(input())
for i in range(t):
    n = int(input())
    a = [list(map(int, input().split())) for _ in range(n)]
    a.sort(key= lambda x : (x[1], -x[0]))
    ans = 1
    now = a[0][1]
    for i in range(1, n):
        if a[i][0] >= now:
            now = a[i][1]
            ans += 1
    print(ans)