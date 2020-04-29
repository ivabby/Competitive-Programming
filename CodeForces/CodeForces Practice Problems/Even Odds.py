n,k = map(int , input().split())

odd = n//2
if n%2 == 1:
    odd+=1

if k<=odd:
    print(2*k - 1)

else:
    k = k - odd
    print(2*k)
