import numpy as np

t = int(input())
for _ in range(t):
    n, v = map(int, input().split())
    a = [0] + (list(map(int, input().split())))
    c = [0] + (list(map(int, input().split())))
    dp = np.zeros((n+1, v+1), dtype=int)
    for i in range(1, n+1):
        for j in range(1, v+1):
            dp[i][j] = dp[i - 1][j]
            if j >= a[i]:
                dp[i][j] = max(dp[i][j], dp[i-1][j - a[i]] + c[i])
    print(dp[n][v])
