mod = int(1e9 + 7)

dp = [[0 for _ in range(1001)] for _ in range(1001)]
for i in range(1001):
    for j in range(i+1):
        if i == j or j == 0:
            dp[i][j] = 1
        else:
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1]
            dp[i][j] %= mod

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    print(dp[n][k])