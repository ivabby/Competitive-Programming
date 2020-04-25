#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
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
    
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    forr(0,n-1) cin>>a[i];

    stack<pair<int,int>> st;
    ll ans = 1 , mod = 1000000007;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top().first >= a[i])
        {
            st.pop();
        }

        if(!st.empty())
            ans = (ans * (st.top().second - i + 1))%mod;
        st.push(mp(a[i] , i));
    }

    cout<<ans<<"\n";
    
    return 0;
}
