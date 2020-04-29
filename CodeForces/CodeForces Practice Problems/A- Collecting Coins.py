t = int(input())
while t > 0:
    t = t-1
    a,b,c,n = map(int, input().split())
    l = list()
    l.append(a)
    l.append(b)
    l.append(c)

    l.sort()
    n = n - (2*l[2] - l[1] - l[0])
    if n<0 or n%3!=0:
        print("NO")
    else:
        print("YES")
