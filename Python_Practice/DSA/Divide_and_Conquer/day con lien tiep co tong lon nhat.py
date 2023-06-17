t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    sum1 = 0
    sum2 = -1e9
    for i in range(n):
        sum1 += a[i]
        sum2 = max(sum1, sum2)
        if sum1 < 0:
            sum1 = 0
    print(sum2)