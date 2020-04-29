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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,p;
        cin>>a>>b>>p;
        string s;
        cin>>s;
        int n = s.length();
        int ans = n - 1;
        ll tot = 0;
        if(n == 2)
        {
            if(s[0] == 'A')
                tot+=a;
            else
                tot+=b;
            if(tot <= p)
                ans = 0;
        }
        else{
            s = s[0] + s;
            n++;
            int i = n-2;
            while(i > 0)
            {
                while(i-1>0 && s[i] == s[i-1])
                    i--;
                
                i--;
                if(s[i+1] == 'A')
                    tot+=a;
                else
                    tot+=b;

                if(tot <= p)
                    ans = i;
                else
                    break;
                if(i == 0)
                    break;
            }
        }
        // cout<<tot<<" ";
        cout<<ans+1<<"\n";
    }
    return 0;
}
