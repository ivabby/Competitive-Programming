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
ll sum = 0;
vector<int> v;
map<int,bool> mp;

bool canPlace(int index,int prev)
{
    if(index == n)
        return mp[sum];

    forr(prev , 9){
        v[index] = i;
        sum+=i*i;
        if(canPlace(index + 1 , i)) return 1;
        sum-=i*i;
    }

    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    forr(1,9000)
        mp[i*i] = 1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        sum = 0;
        if(canPlace(0,1)){
            for(auto i : v)
                cout<<i;
            cout<<"\n";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
