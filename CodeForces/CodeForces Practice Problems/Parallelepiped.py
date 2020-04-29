import math
a,b,c = map(int, input().split())

x = int(math.sqrt((a*b) // c))
y = a//x
z = b//x
print(x*4 + y*4 + z*4)
