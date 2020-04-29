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
const int N = (int)100 + 9;
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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);

        vector<int> p(k*2 + 10 , 0);
        // memset(p,0,sizeof p);

        forr(0,n-1) cin>>a[i];
        map<int,int> m;

        int j = n-1;
        for(int i=0;i<n/2;i++,j--)
        {
            m[a[i] + a[j]]++;
            int L = min(a[i] , a[j]) + 1;
            int R = max(a[i] , a[j]) + k;

            p[L] += 1;
            p[R+1] -= 1;
        }

        for(int i=1;i<2*k+10;i++)
            p[i] += p[i-1];

        int mini = INT_MAX;
        for(int i=2;i<=2*k;i++)
        {
            int cnt1 = p[i] - m[i];
            int cnt2 = m[i];
            int cnt3 = (n/2) - cnt1 - cnt2;

            int cnt = cnt1 + (cnt3*2);
            mini = min(mini , cnt);
        }

        cout<<mini<<"\n";
    }
    return 0;
}
