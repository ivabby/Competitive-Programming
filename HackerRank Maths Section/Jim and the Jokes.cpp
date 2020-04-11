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

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    map<int,ll> mm;
    while(t--)
    {
        int m,d;
        cin>>m>>d;
        if(m == 10)
            mm[d]++;
        else
        {
            bool f = true;
            int val = 0 , pos = 1;
            while(d > 0)
            {
                val = val + (d%10)*pos;
                pos*=m;
                if(d%10 >= m)
                {
                    f = false;
                    break;
                }
                d/=10;
            }

            if(f)   mm[val]++;
        }
    }

    
    ll ans = 0;
    for(auto i : mm)
        ans = ans + (i.second * (i.second - 1))/2;

    cout<<ans<<"\n";
    return 0;
}
