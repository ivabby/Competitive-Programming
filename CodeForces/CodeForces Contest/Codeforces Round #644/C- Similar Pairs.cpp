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
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[110];
        memset(a , 0 , sizeof a);
        vector<int> c,d;

        forr(1,n)
        {
            int x;
            cin>>x;
            if(x%2 == 0)
                c.pb(x);
            else
                d.pb(x);
        }

        if(c.size()%2 == 0 && d.size()%2 == 0)
        {
            cout<<"YES\n";
            continue;
        }

        sort(all(d));

        for(auto i : c)
            a[i]++;
        
        string ans = "NO\n";
        for(auto i : d)
        {
            if(a[i-1] > 0 || a[i+1]>0)
            {
                ans = "YES\n";
                break;
            }
        }

        cout<<ans;
    }
    
    return 0;
}
