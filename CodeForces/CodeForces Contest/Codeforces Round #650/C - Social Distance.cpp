#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
const int N = (int)1e5 + 9;
ll power(ll x,ll y)
{
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        int ans = 0;
        set<int> ss;

        forr(i,0,n)
        {
            if(s[i] == '1')
                ss.insert(i);
        }
        ss.insert(n+k);
        ss.insert(-k);

        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                int lIndex = max(0 , i-k);
                int rIndex = min(n-1 , i+k);

                auto lower = ss.upper_bound(lIndex - 1);
                auto upper = ss.lower_bound(rIndex);
                if(*lower<=rIndex && *upper>=lIndex)
                {
                    
                }
                else{
                    // cout<<i<<" "<<*lower<<" "<<*upper<<"\n";
                    ss.insert(i);
                    ans++;
                }
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
