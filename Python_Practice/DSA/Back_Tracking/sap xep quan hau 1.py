def test(col, d1, d2, cnt, i, n):
    for j in range(1, n + 1):
        if col[j] == 1 and d1[i - j + n] == 1 and d2[i + j - 1] == 1:
            col[j] = d1[i - j + n] = d2[i + j - 1] = 0
            if i == n:
                cnt[0] += 1
            else:
                test(col, d1, d2, cnt, i + 1, n)
            col[j] = d1[i - j + n] = d2[i + j - 1] = 1
t = int(input())
while t>0:

    n = int(input())
    col = [1 for i in range(50)]
    d1 = col.copy()
    d2 = col.copy()
    cnt = [0]
    test(col, d1, d2, cnt, 1, n)
    print(cnt[0])
    t-=1



