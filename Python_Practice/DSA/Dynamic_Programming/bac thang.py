mod = int(1e9 + 7)

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    dp = [0] * (n+1)
    dp[0] = dp[1] = 1
    for i in range(2, n+1):
        for j in range(1, min(i, k) + 1):
            dp[i] += dp[i-j]
            dp[i] %= mod
    print(dp[n])
