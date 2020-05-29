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
int a[1005] , n;
string s;

int dfs(int k,int d)
{
    if(k > n) return 1;
    for(int i=d+1;i<=10;i++)
        if(a[k-1]!=i && s[i] == '1')
        {
            a[k] = i;
            if(dfs(k+1 , i-d)) return 1;
        }
    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>s>>n;
    s = "0" + s;
    if(dfs(1 , 0))
    {
        cout<<"YES\n";
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
    }
    else
        cout<<"NO";

    return 0;
}
