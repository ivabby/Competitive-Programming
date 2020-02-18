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
const int N = (int)1e3 + 9;
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
int t,n,p,a[N];

void ok()
{
    for(int i=0;i<n;i++)
    {
        if(a[i] == 1) continue;
        if(p%a[i] != 0)
        {
            cout<<"YES ";
            int v = p/a[i] + 1;
            for(int j=0;j<n;j++)
            {
                if(i == j) cout<<v;
                else cout<<"0 ";
                cout<<" ";
            }
            cout<<"\n";
            return;
        }

        for(int j=i+1;j<n;j++)
        {
            if(a[j] == 1) continue;
            int v1 = a[i] , v2 = a[j];
            if(v1 > v2) swap(v1,v2);

            int m2 = p/v2 - 1;
            int left = p - v2*m2;
            int m1 = left/v1 + 1;
            // cout<<a[i]<<" "<<a[j]<<"\n";
            // cout<<m1<<" "<<m2<<"\n"; 
            int ans = v2*m2 + v1*m1;
            if(ans-v1<p && ans-v2<p)
            {
                cout<<"YES ";
                for(int k=0;k<n;k++)
                {
                    if(i == k) cout<<m1<<" ";
                    else if(j == k) cout<<m2<<" ";
                    else cout<<"0 ";
                }
                cout<<"\n";
                return;
            }
            m1 = p/v1 - 1;
            left = p - v1*m1;
            m2 = left/v2 + 1;
            ans = v1*m1 + v2*m2;
            // cout<<m1<<" "<<m2<<" "<<ans<<"\n\n";
            if(ans-v1<p && ans-v2<p)
            {
                cout<<"YES ";
                for(int k=0;k<n;k++)
                {
                    if(i == k) cout<<m1<<" ";
                    else if(j == k) cout<<m2<<" ";
                    else cout<<"0 ";
                }
                cout<<"\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        forr(0,n-1) cin>>a[i];

        ok();
    }   
    
    return 0;
}
