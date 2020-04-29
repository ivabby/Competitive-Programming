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
const int N = (int)2e5 + 9;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

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
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    
    int a[5][5];
    int n = 5;
    forr(0,4)
        for(int j=0;j<5;j++)
            cin>>a[i][j];

    vector<int> s = {0,1,2,3,4};
    ll maxi = 0;
    do{
        ll c = a[s[0]][s[1]] + a[s[1]][s[0]] + 2*a[s[2]][s[3]] + 2*a[s[3]][s[2]] + a[s[1]][s[2]] + a[s[2]][s[1]] + 2*a[s[3]][s[4]] + 2*a[s[4]][s[3]];
        maxi = max(maxi , c);
    } while(next_permutation(s.begin() , s.end()));

    cout<<maxi;
    return 0;
}
