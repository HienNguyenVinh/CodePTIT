n= int(input())
s = [0 for i in range(n)]
a=list()
for i in range(n):
    a.append(list(map(int, input().split())))

if n == 2:
    print(f"{a[0][1]//2} {a[0][1]//2}\n")
else:
    s[0] = (a[0][1] + a[0][2] - a[1][2]) // 2
    for i in range(1, n):
        s[i] = a[0][i] - s[0]
    for i in range(n):
        print(s[i], end=" ")
    print()

