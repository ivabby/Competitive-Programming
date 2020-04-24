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

void solve(){
    int n,a;
    cin>>n;
    
    map<int,int> m;
    forr(1,n)
    {
        cin>>a;
        m[a] = i;
    }
    
    int j = n;
    int pos = n+1;
    vector<int> vis(n+10 , 0);
    vis[pos] = 1;
    vis[pos+1] = 1;
    for(auto i : m)
    {
        // cout<<i.first<<" "<<i.second<<" "<<pos<<"\n";
        int p = i.second;
        if(p != pos+1 && vis[pos+1] == 0)
        {
            cout<<"No\n";
            return;
        }
        else
        {
            pos = p;
            vis[pos] = 1;
        }
    }


    cout<<"Yes\n";
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
