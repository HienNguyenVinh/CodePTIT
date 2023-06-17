t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    res = 2e6
    for i in range(n):
        for j in range(i+1, n):
            sum = a[i] + a[j]
            if abs(sum) < abs(res):
                res = sum
    print(res)