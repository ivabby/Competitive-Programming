def val(c):
    if c >= '0' and c <= '9':
        return ord(c) - ord('0')
    else:
        return ord(c) - ord('A') + 10
t = int(input())
greater = int(1e12)
# print(greater)
while t>0:
    t-=1
    n = int(input())
    sz = n
    m = {}
    while n>0:
        n-=1
        b,y = map(str,input().split())
        b = int(b)
        if b == -1:
            maxi = 0
            for i in y:
                maxi = max(maxi, val(i) + 1)
            sets = set()
            for i in range(max(maxi , 2),37):
                bigger = False
                length = len(y) - 1
                b = i
                c = 1
                deci = 0
                while length >= 0:
                    deci = deci + c * int(val(y[length]))
                    c = c * b
                    length -= 1
                # if deci <= greater:
                sets.add(deci)

            for i in sets:
                j = i
                if j in m:
                    m[j]+=1
                else:
                    m[j] = 1
        else:
            length = len(y)-1
            c = 1
            bigger = False
            deci = 0
            while length>=0:
                deci = deci + c*int(val(y[length]))
                c = c * b
                length-=1
            # if deci <= greater:
            # print()
            if deci in m:
                m[deci]+=1
            else:
                m[deci] = 1
    # print(m)
    ans = greater + 1
    for i in m:
        if m[i] == sz:
            ans = min(ans , i)
    if ans > greater:
        print("-1")
    else:
        print(ans)