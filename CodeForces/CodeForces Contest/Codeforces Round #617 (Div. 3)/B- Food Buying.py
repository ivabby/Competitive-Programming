t = int(input())
while t>0:
    t-=1
    n = int(input())
    s = 0
    while n>9:
        q = n//10
        s = s + q*10
        n = n%10 + q
 
    s = s + n
    print(s)
