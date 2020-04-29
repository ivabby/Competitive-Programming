t = int(input())
while t>0:
    t-=1
    n = int(input())
    a = set(map(int , input().split()))
    vis = set()
    cnt = 0
    for i in a:
        while i%2 == 0 and i not in vis:
            vis.add(i)
            cnt+=1
            i//=2

    print(cnt)
