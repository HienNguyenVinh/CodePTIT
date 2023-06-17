a = [0 for i in range(93)]

def handle():
    a[1] = 1
    a[2] = 1
    for i in range(3, 93):
        a[i] = a[i-2] + a[i-1]

handle()
t = int(input())
for i in range(t):
    global n, k
    n, k = list(map(int, input().split()))
    while True:
        if n==1:
            print("A")
            break
        elif n == 2:
            print("B")
            break
        elif k > a[n-2]:
            k -= a[n-2]
            n -= 1
        else:
            n -= 2
