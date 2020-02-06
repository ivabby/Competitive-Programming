#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)1e5 + 9;
ll power(ll x,ll y)
{
    ll ans = 1;
    while(y>0)
    {
        if(y%2 == 1)
            ans = ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
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
