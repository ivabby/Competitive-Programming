def find(i,n):
    j = i
    cnt = 0
    while j<=n:
        cnt+=1
        j = j*10+i
 
    return cnt
 
t = int(input())
while t>0:
    t-=1
    n = int(input())
    cnt = 0
    for i in range(1,10):
        cnt+=find(i,n)
 
    print(cnt)
