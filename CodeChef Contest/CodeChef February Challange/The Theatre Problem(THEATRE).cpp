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
int a[4][4];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    int ans = 0;
    while(t--){
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                a[i][j] = 0;
        cin>>n;
        forr(1,n){
            char b;
            int m;
            cin>>b>>m;
            int r = b - 'A';
            int c = m/3 - 1;
            // cout<<r<<" "<<c<<"\n";
            a[r][c]++;
        }

        // for(int i=0;i<4;i++)
        // {
        //     for(int j=0;j<4;j++) 
        //         cout<<a[i][j]<<" ";
        //     cout<<"\n";
        // }

        // cout<<"\n\n";
        int maxi = -400;
        string s = "0123";
        do{
            int cur = 0;
            int k = 100;
            int zero = 0;
            vector<int> v;

            for(int i=0;i<4;i++)
            {
                int j = s[i] - '0';
                if(a[i][j] == 0)
                {
                    zero++;
                    continue;
                }
                v.push_back(a[i][j]);
            }
            sort(all(v));
            for(int i=v.size()-1;i>=0;i--){
                cur+=v[i]*k;
                k-=25;
            }
            // cout<<cur<<" ";
            cur = cur - zero*100;
            maxi = max(maxi , cur);
            // cout<<s<<" "<<cur<<"\n";
        } while(next_permutation(s.begin() , s.end()));
        // cout<<"\n";
        cout<<maxi<<"\n";
        ans+=maxi;
    }
    cout<<ans<<"\n";
    
    return 0;
}
