def move(a, b):
    print(f"{a} -> {b}")
def hanoiTower(n, a, b, c):
    if n == 1:
        move(a, c)
    else:
        hanoiTower(n-1, a, c, b)
        move(a,c)
        hanoiTower(n-1, b, a, c)
n = int(input())
a = 'A'
b = 'B'
c = 'C'
hanoiTower(n, a, b, c)