n = int(input())
a = list(map(int, input().split()))
cnt = 1
m = 0
f = [0 for _ in range(n+1)]
for x in a:
    f[x] = f[x-1] + 1
m = max(f)
print(n - m)