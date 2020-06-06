t = int(input())

while t>0:
    t-=1
    n = int(input())

    ans = 0

    while n>0:
        ans += n
        n //=2

    print(ans)
