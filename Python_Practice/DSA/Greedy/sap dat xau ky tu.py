def handle():
    Max = 0
    for i in a:
        if s.count(i) > Max:
            Max = s.count(i)
    if len(s)-Max >= Max-1:
        print(1)
    else:
        print(-1)

t = int(input())
for i in range(t):
    global s, a
    s = input()
    a = set(s)
    handle()