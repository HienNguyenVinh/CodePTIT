t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    cnt = a.count(0)
    print(cnt)