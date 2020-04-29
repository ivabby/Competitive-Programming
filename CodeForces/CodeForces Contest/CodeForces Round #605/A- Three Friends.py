t = int(input())
while t>0:
    t-=1
    a = list(map(int , input().split()))
    a.sort()
    if a[0] == a[1] and a[1] == a[2]:
        print(a[2]-a[0]+a[2]-a[1]+a[1]-a[0])
    elif a[0] == a[1]:
        a[2]-=1
        if a[2] != a[1]:
            a[1]+=1
            a[0]+=1
        print(a[2]-a[0]+a[2]-a[1]+a[1]-a[0])
    elif a[1] == a[2]:
        a[0]+=1
        if a[0] != a[1]:
            a[2]-=1
            a[1]-=1
        print(a[2]-a[0]+a[2]-a[1]+a[1]-a[0])
    else:
        a[0]+=1
        if a[0] == a[1]:
            a[2]-=1
        else:
            a[2]-=1
            a[1]-=1
        print(a[2]-a[0]+a[2]-a[1]+a[1]-a[0])
