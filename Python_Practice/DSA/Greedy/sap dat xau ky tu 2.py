def handle():
    Max = 0
    for i in a:
        if s.count(i) > Max:
            Max = s.count(i)
    if Max <= len(s)//k + 1:
        print(1)
    else:
        print(-1)

t = int(input())
for i in range(t):
    global s, a, k
    k = int(input())
    s = input()
    a = set(s)
    handle()