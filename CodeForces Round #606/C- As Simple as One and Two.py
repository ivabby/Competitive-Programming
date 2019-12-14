t = int(input())
while t>0:
    t-=1
    s = input()
    cnt = 0
    a = list()
    i = 0
    while(i<len(s) - 2):
        if s[i] == 'o' and s[i+1] == 'n' and s[i+2] == 'e':
            a.append(i+2)
            i+=3
            cnt+=1
        elif s[i] == 't' and s[i+1] == 'w' and s[i+2] == 'o':
            if i+3<len(s) and s[i+3] == 'o':
                a.append(i+2)
            else:
                a.append(i+3)
            i+=3
            cnt+=1
        else:
            i+=1

    print(cnt)
    print(" ".join(map(str , a)))
