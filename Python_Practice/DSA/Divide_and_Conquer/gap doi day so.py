def handle():
    global n, k
    for i in range(n, -1, -1):
        if k > tmp[i]:
            k -= tmp[i]
        elif k == tmp[i]:
            print(i+1)

t = int(input())
tmp = [2**i for i in range(51)]
for i in range(t):
    global n, k
    n, k = input().split()
    n = int(n)
    k = int(k)
    handle()