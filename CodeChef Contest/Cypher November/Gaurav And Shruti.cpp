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
int t,n;
ll prime[10000000];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    set<ll> primes;
    primes.insert(2);
    prime[2] = true;
    for(int i=3;i<999999;i+=2)
    {
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++)
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        if(flag)
            prime[i] = true;
    }
    cin>>t;
    while(t--)
    {
        ll mini = LONG_MAX;
        ll tot = 0;
        cin>>n;
        forr(1,n)
        {
            string s;
            cin>>s;
            ll cnt = 0;
            for(int j=0;j<s.length();j++)
            {
                string a = "";
                int l = s.length();
                int len = min(l, j+6);
                for(int k=j;k<len;k++)
                {
                    a = a + s[k];
                    ll value = stol(a + "");
                    if(prime[value])
                        cnt++;
                }
            }
            ll v = stol(s);
            if(cnt == tot)
            {
                // cout<<s<<" "<<cnt<<"\n";
                tot = cnt;
                mini = min(mini , v);
            }
            else if(cnt > tot)
            {
                tot = cnt;
                mini = v;
            }
        }
        cout<<mini<<"\n";
    }
    return 0;
}
