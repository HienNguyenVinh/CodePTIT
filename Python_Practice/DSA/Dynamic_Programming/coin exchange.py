def exchange(n ,a):
    dp = [float('inf')] * (n+1)
    dp[0] = 0

    for i in range(n+1):
        for c in a:
            if i >= c:
                dp[i] = min(dp[i], dp[i-c] + 1)
            else:
                break
    return dp[n] if dp[n] != format('inf') else -1
t = int(input())
a = [1, 2, 5, 10, 20, 50, 100, 200, 500, 1000]
for i in range(t):
    n = int(input())
    cnt = exchange(n, a)
    print(cnt)
