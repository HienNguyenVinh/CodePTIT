import math
ll = 1e9
def Pow(x, n):
    if n == 0:
        return 1
    tmp = Pow(x, n//2)
    tmp = (tmp * tmp) % ll
    if n % 2 == 1:
        tmp = (tmp * x) % ll
    return tmp
def handle(i):
    n = int(input())
    print(f'Case # {i + 1}:', end=" ")
    x = 3 + math.sqrt(5)
    res = math.floor(Pow(x, n))
    res = res % 1000
    if res < 10:
        print(f'00{res}')
    elif res < 100:
        print(f'0{res}')
    else:
        print(res)
t = int(input())
for i in range(t):
    handle(i)