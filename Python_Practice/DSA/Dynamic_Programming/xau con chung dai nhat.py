import numpy as np

t = int(input())
for _ in range(t):
    s1 = input()
    s2 = input()
    n = len(s1)
    m = len(s2)
    a = np.zeros((m+2, n+2))
    for i in range(1, n+1):
        for j in range(1, m+1):
            if s1[i-1] == s2[j-1]:
                a[i][j] = a[i-1][j-1] + 1
            else:
                a[i][j] = max(a[i][j-1], a[i-1][j])
    print(int(np.amax(a)))
