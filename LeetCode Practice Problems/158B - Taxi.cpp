#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> m;

    forr(0,n-1)
    {
        int x;
        cin>>x;
        m[x]++;
    }

    int four = m[4];
    int one = m[1];
    int two = m[2];
    int three = m[3];

    int threeOne = min(one , three);
    one = max(0 , one - threeOne);
    three = max(0 , three - threeOne);

    int ans = four + threeOne + three;
    int onlyTwo = two/2;
    int remTwo = two%2;

    ans+=onlyTwo;

    int oneTwo = min(one , remTwo);
    one-=oneTwo*2;
    remTwo-=oneTwo;
    ans+=oneTwo;

    if(one > 0)
        ans+=one/4 + (one%4!=0?1:0);
    if(remTwo>0)
        ans++;

    cout<<ans;

    return 0;
}
