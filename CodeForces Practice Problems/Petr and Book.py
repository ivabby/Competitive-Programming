n = int(input())

a = list(map(int , input().split()))

i = 0
while True:
    if n <= a[i]:
        print(i+1)
        break
    n-=a[i]
    i = (i+1)%7
