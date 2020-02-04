t = int(input())
while t>0:
    t-=1
    n = int(input())
    a = list(map(int , input().split()))
 
    c1 = 0
    c2 = 0
    for i in a:
        if i%2 == 0:
            c1+=1
        else:
            c2+=1
 
    if c2%2 == 1 or (c1>0 and c2>0):
        print("YES")
    else:
        print("NO")
