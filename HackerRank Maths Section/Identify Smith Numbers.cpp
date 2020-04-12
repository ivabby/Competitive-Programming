#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define mod 998244353LL
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)100 + 9;

ll factor(ll n)
{
    ll s = 0;
    int i = 2;
    while(i*i <= n)
    {
        if(n%i == 0)
        {
            int j = i;
            while(j)
            {
                s+=j%10;
                j/=10;
            }
            n = n/i;
        }
        else{
            i = (i == 2)?3:i+2;
        }
    }

    if(n > 1)
    {
        while(n)
        {
            s+=n%10;
            n/=10;
        }
    }
    return s;
}

ll sum(ll n)
{
    ll s = 0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll n;
    cin>>n;

    // cout<<sum(n)<<" : "<<factor(n)<<"\n";
    if(sum(n) == factor(n)) cout<<"1";
    else cout<<"0";
    return 0;
}
