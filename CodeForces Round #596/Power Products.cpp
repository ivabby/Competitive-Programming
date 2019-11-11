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
int n,k;
ll a[N];
vector<ll> primes;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>k;
    forr(1,n) cin>>a[i];

    forr(2,(int)1e5/2)
    {
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++)
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        
        if(flag)
        { primes.pb(i);}
    }

    map<ll , int> m;
    ll c = 0;
    forr(1,n)
        for(int j=i+1;j<=n;j++)
        {
            if(a[i] * a[j] == 1) c++;
            else m[a[i] * a[j]]++;
        }

    for(auto i : m)
    {
        int key = i.first;
        ll factor = 1;
        ll product = 1;
        for(auto j : primes)
        {
            ll cnt = 0;
            while(key%j == 0)
            {
                cnt++;
                key/=j;
            }
            if(cnt)
                product = product * j;
        }
        key = i.first;
        ll number = product;
        while(number * product <= key)
        {
            factor++;
            number*=product;
        }
        ll sq = sqrt(key/number);
        cout<<i.first<<" "<<i.second<<" "<<factor<<" "<<number<<" "<<sq<<" "<<key/number<<"\n";
        if(number == key && factor == k && key%number == 0 && sq*sq == key/number)
            c+=i.second;
    }
    cout<<c;
    return 0;
}