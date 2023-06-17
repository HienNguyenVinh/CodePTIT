
t=int(input())
while t>0:
    t-=1
    n,k=map(int,input().split())
    kq="A"
    x=66
    for i in range(1,n):
        kq=kq+chr(x)+kq
        x+=1
    print(kq[k-1])