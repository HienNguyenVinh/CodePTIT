def handle():
    s = input()
    n = len(s)
    res = 1
    dp = [[0 for _ in range(n)] for _ in range(n)]
    for i in range(n):
            dp[i][i] = 1
    for k in range(1, n):
        for i in range(n-k):
            j = i+k
            if s[i] == s[j] and k == 1:
                dp[i][j] = 1
            elif s[i] == s[j] and k > 1:
                dp[i][j] = dp[i+1][j-1]
            else:
                dp[i][j] = 0
            if dp[i][j]:
                res = max(res, k+1)
    print(res)


t = int(input())
for _ in range(t):
    handle()
