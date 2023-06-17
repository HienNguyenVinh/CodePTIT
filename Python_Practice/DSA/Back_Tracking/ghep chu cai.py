'''def isConsonat(c):
    return (c != 'A' and c != 'E')

def solve(s):
    for i in range(len(s)):
        if s[i] == 'A' or s[i] == 'E':
            if i > 0 and i < len(s) - 1 and isConsonat(s[i - 1]) and isConsonat(s[i + 1]):
                return
    print(s)

def Try(i, c, vs, s):
    for j in range(ord('A'), ord(c) + 1):
        if not vs[j]:
            vs[j] = 1
            s += chr(j)
            if len(s) == ord(c) - ord('A') + 1:
                solve(s)
            else:
                Try(i + 1, c, vs, s)
            vs[j] = 0
            s = s[:-1]

def testCase():
    c = input()
    vs = [0] * 127
    s = ''
    Try(1, c, vs, s)

testCase()
'''

c = input()
vs = [True] * 127
s = ""

def isConsonat(x):
    return x != "A" and x != "E"

def solve(s):
    for i in range(len(s)):
        if s[i] == "A" or s[i] == "E":
            if i > 0 and i < len(s)-1 and isConsonat(s[i-1]) and isConsonat(s[i+1]):
                return
    print(s)

def Try(i, c, vs, s):
    for j in range(ord("A"), ord(c)+1):
        if vs[j]:
            vs[j] = False
            s += chr(j)
            if len(s) == ord(c) - ord("A") + 1:
                solve(s)
            else:
                Try(i+1, c, vs, s)
            vs[j] = True
            s = s[:-1]

Try(1, c, vs, s)