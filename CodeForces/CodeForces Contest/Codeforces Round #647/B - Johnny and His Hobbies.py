t = int(input())

while t>0:
    t-=1

    n = int(input())
    a = list(map(int , input().split()))

    ans = -1

    for i in range(1,1024):
        b = []
        for j in range(n):
            b.append((i ^ a[j]))

        if set(a) == set(b):
            ans = i
            break

    print(ans)  
