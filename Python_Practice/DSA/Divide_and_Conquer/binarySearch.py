def binarySearch(a, k, l, r):
    while(l <= r):
        mid = (l+r)//2
        a[mid] = int(a[mid])
        if a[mid] == k:
            return mid+1
        if a[mid] < k:
            return binarySearch(a, k, mid+1, r)
        else:
            return binarySearch(a, k, l, mid-1)
    return 0
t = int(input())
for i in range(t):
    n, k = input().split()
    n = int(n)
    k = int(k)
    a = input().split()
    res = binarySearch(a, k, 0, n-1)
    if res:
        print(res)
    else:
        print("NO")