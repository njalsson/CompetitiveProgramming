#kattis project https://open.kattis.com/problems/smallestmultiple

def gcd(a,b):
    if b==0: return a
    else: return gcd(b, a % b)

def lcm(a,b):
    return a // gcd(a,b) * b
inp = "eeks dee"
while True:
    try:
        inp = [int(x) for x in input().split()]
        b = inp[0]
        for x in inp:
            if x != b: b = lcm(b,x)

        print(b)

    except Exception as e:
        break
