import  math


def snt(x):
    if x<2: return 0
    else:
        for i in range(2, int( math.sqrt(x)+1)):
            if x%i==0: return 0
        return 1

def uscln(a, b):
    if (b == 0):
        return a;
    return uscln(b, a % b);

n = int(input())
a= []
s=input()
a =s.split()
for i in range(0, n-1):
    for j in range(i+1, n):
        x= int(a[i])
        y=int(a[j])
        if(uscln(x,y)==1):
            print(x, y)

