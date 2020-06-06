t = int(input())

while t>0:
    t-=1

    a,b = map(int , input().split())

    if a > b:
        a,b = b,a

    ans = 0
    while a*8 <= b:
        a *= 8
        ans += 1

    while a*4 <= b:
        a *= 4
        ans += 1

    while a*2 <= b:
        a *= 2
        ans += 1

    if a != b:
        ans = -1

    print(ans)
