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
    string s;
    cin>>s;
    int n = s.length();
    ll f1[26] = {0};
    ll maxi = 1;
    map<string , ll> m;
    for(int i=0;i<n;i++)
    {
        int pos = s[i] - 'a';
        f1[pos]++;
        maxi = max(maxi , f1[pos]);
    }
    
    
    for(int i=0;i<n;i++)
    {
        int pos = s[i] - 'a';
        f1[pos]--;
        ll v = -1;

        for(int j=0;j<26;j++)
        {
            if(f1[j])
            {
                char c = (char)(j + 'a');
                string ss = "";
                ss = ss + s[i] + c;
                m[ss]+=f1[j];
                maxi = max(maxi , m[ss]);
            }
        }
    }
    
    cout<<maxi<<"\n";
    return 0;
}
