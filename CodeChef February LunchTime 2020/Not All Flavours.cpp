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
    freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        forr(0,n-1) cin>>a[i];

        int c[k+10] = {0};
        int i=0,j=0;
        int maxi = 0 , cnt = 0;

        while(j<n)
        {
            while(j<n)
            {
                if(c[a[j]] == 0 && cnt + 1 == k)
                    break;

                c[a[j]]++;
                if(c[a[j]] == 1) cnt++;

                maxi = max(maxi , j-i+1);
                j++;
            }
            while(i + 1 <= j)
            {
                c[a[i]]--;
                if(c[a[i]] == 0)
                {
                    cnt--;
                    break;
                }
                i++;
            }
            i++;
            if(j+1 == n) break;
        }
        
        cout<<maxi<<"\n";
    }   
    return 0;
}
