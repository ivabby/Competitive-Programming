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
const int N = (int)100 + 9;
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
    

    ll n,m;
    cin>>n>>m;

    ll minOne = n - 1;
    ll maxOne = (n + 1)*2;

    if(m>=minOne && m<=maxOne)
    {
        vector<int> a(n+1 , 0);
        int j = 0;
        for(int i=1;i<=m;i++)
        {
            j = (j+1)%(n+1);
            a[j] = a[j]*10 + 1;
        }

        for(int i=0;i<=n;i++)
        {
            if(a[i] > 0)
                cout<<a[i];
            if(i != n)
                cout<<"0";
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}
