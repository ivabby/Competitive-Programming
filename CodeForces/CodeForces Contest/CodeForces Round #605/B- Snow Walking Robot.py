t = int(input())
while t>0:
    t-=1
    s = input()
    left = 0
    right = 0
    up = 0
    down = 0
    for i in s:
        if i == "L":
            left+=1
        elif i == "R":
            right+=1
        elif i == "U":
            up+=1
        else:
            down+=1

    minSide = min(left,right)
    minUp = min(up,down)
    if minSide == 0:
        if minUp > 0:
            print("2")
            print("UD")
        else:
            print("0")
            print()
    elif minUp == 0:
        if minSide > 0:
            print("2")
            print("LR")
        else:
            print("0")
            print()
    else:
        print(minSide*2 + minUp*2)
        s = ("L"*minSide ) + ("U"*minUp) + ("R"*minSide) + ("D"*minUp)
        print(s)
