t = int(input())
for _ in range(t):
    n, s = map(int, input().split())
    a = list(map(int, input().split()))
    dp = [0] * (s+1)
    dp[0] = 1
    for i in range(n):
        for j in range(s, a[i]-1, -1):
            if dp[j] == 0 and dp[j - a[i]] == 1:
                dp[j] = 1
    print("YES" if dp[s] == 1 else "NO")