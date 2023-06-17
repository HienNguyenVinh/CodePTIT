

t = int(input())
for _ in range(t):
     n = int(input())
     a = list(map(int, input().split()))
     dp = [1] * (n+1)
     for i in range(n):
         for j in range(i):
             if a[i] > a[j]:
                 dp[i] = max(dp[i], dp[j] + 1)
     s = max(dp)
     print(n - s)
