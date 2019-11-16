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
int n,a[N],c[(int)1e6+9],p = 0,s=0;
set<int> present;
vector<int> b;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    memset(c,-1,sizeof c);
    cin>>n;
    forr(1,n){ 
        cin>>a[i];}

    forr(1,n)
    {
        if(a[i] > 0)
        {
            if(c[a[i]] == -1) c[a[i]] = 1;
            else if(c[a[i]] == 0)
            {
                if(present.find(a[i]) != present.end())
                {
                    cout<<"-1";
                    return 0;
                }
                else
                    c[a[i]]++;
            }
            else
            {
                cout<<"-1";
                return 0;
            }
            // cout<<i<<" "<<a[i]<<" "<<c[a[i]]<<"\n";
            present.insert(a[i]);
            s++;
        }
        else
        {
            if(c[abs(a[i])] == 1) c[abs(a[i])]--;
            else
            {
                cout<<"-1";
                return 0;
            }
            s--;
            if(s==0)
            {
                present.clear();
                // cout<<i<<" "<<p<<"\n";
                if(i == n)
                    b.pb(i-p);
                else
                    b.pb(i-p);
                p=i;
            }
        }
    }
    if(p!=n || s!=0)
        cout<<"-1";
    else{
        cout<<b.size()<<"\n";
        for(auto i : b) cout<<i<<" ";
    }

    return 0;
}
