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

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n) , b;
    set<int> s;

    forr(0,n-1)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    if(s.size() > k)
    {
        cout<<"-1\n";
        return;
    }

    while(b.size() < k)
    {
        for(auto i : s)
        {
            b.pb(i);
            if(b.size() == k) break;
        }
    }

    cout<<n*k<<"\n";
    for(int i=0;i<n;i++)
    {
        for(auto i : b)
            cout<<i<<" ";
    }
    cout<<"\n";
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
        solve();
    }
    
    return 0;
}
