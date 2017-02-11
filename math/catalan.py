import sys

d = {}

def compute():
    k = 1
    for x in range(1,10001 ):
        k *= x
        d[x] = k


n = int(input())
compute()
for y in range(0,n):
    x = int(input())
    over = d[x * 2]
    under = d[x+1] * d[x]
    sys.stdout.write(str(over // under) + '\n')
    #print(over // under)



