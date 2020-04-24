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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        forr(0,n-1) cin>>a[i];

        vector<int> cnt(k+10 , 0);
        int ans = 0 , d = 0;
        int i = 0 , j = -1;
        while(j<n)
        {
            while(j+1<n)
            {
                j++;
                cnt[a[j]]++;
                if(cnt[a[j]] == 1)
                    d++;
                if(d == k)
                    break;
                ans = max(ans , j-i+1);
            }


            if(j+1 == n)
                break;

            if(d == k)
            {
                while(d == k)
                {
                    cnt[a[i]]--;
                    if(cnt[a[i]] == 0)
                        d--;
                    i++;
                }
            }

        }

        cout<<ans<<"\n";
    }

    
    return 0;
}
