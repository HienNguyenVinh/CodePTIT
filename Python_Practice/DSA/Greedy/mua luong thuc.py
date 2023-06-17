import math

satur = [6,13,20,27]
def handle():
    if n < m or 6*(n-m) < m:
        print(-1)
    else:
        print(math.ceil(s*m / n))

t = int(input())
for i in range(t):
    global n, s, m
    n, s, m = list(map(int, input().split()))
    handle()