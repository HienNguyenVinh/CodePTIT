def handle(s):
    if s[0] == '0':
        print(0)
        return
    n = len(s)
    dp = [0] * (n+1)
    dp[0] = dp[1] = 1
    for i in range(2, n+1):
        if s[i-1] > '0':
            dp[i] = dp[i-1]
        if s[i-2] == '1' or (s[i-2] == '2' and s[i-1] < '7'):
            dp[i] += dp[i-2]
    print(dp[n])

t = int(input())
for _ in range(t):
    s = input()
    handle(s)