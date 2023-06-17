
def test(m):
    global x0, x1, x2, x3, x4, x5, x6, x7, x8, x9
    if m == 0:
        x0 += 1
    elif m == 1:
        x1 += 1
    elif m == 2:
        x2 += 1
    elif m == 3:
        x3 += 1
    elif m == 4:
        x4 += 1
    elif m == 5:
        x5 += 1
    elif m == 6:
        x6 += 1
    elif m == 7:
        x7 += 1
    elif m == 8:
        x8 += 1
    elif m == 9:
        x9 += 1

def check(x):
    while x > 0:
        m = x % 10
        test(m)
        x /= 10
def handle():
    global a, b
    global x0, x1, x2, x3, x4, x5, x6, x7, x8, x9
    x0 = x1 = x2 = x3 = x4 = x5 = x6 = x7 = x8 = x9 = 0
    for i in range(a, b+1):
        check(i)
    print(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, end= " ")
    print()
t = int(input())
for i in range(t):
    global a, b
    a, b = input().split()
    a = int(a)
    b = int(b)
    handle()