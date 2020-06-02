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
const int N = (int)1e6 + 9;
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
int a[N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string s;
    cin>>s;
    int n = s.length();

    a[0] = 0;
    int t = 0;
    forr(1,n)
    {
        while(t>0 && s[t] != s[i])
            t = a[t-1];
        if(s[t] == s[i])
            t++;
        a[i] = t;
    }

    int mx = 0;
    for(int i=0;i<n-1;i++)
        mx = max(mx , a[i]);

    if(a[n-1] > mx)
        a[n-1] = a[a[n-1] - 1];
    mx = a[n-1];

    if(mx == 0)
        cout<<"Just a legend";
    else
    {
        forr(0,mx-1)
            cout<<s[i];
    }
    
    return 0;
}
