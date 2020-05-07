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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string s;
    int a,b;

    cin>>s>>a>>b;

    int n = s.length();
    vector<int> p1(n , 0) , p2(n , 0);

    ll L = 1;
    for(int i=0;i<n;i++)
    {
        int v = (s[i] - '0');
        if(i == 0)
            p1[i] = v%a;
        else
            p1[i] = (p1[i-1]* 10 + v)%a;
    }

    L = 1;
    for(int i=n-1;i>=0;i--)
    {
        int v = (s[i] - '0')%b;
        if(i == n-1)
            p2[i] = v;
        else
            p2[i] = (v*L + p2[i+1])%b;
        L = (L * 10)%b;
    }

    for(int i=1;i<n;i++)
    {
        if(p1[i-1] == 0 && p2[i] == 0 && s[i]!='0')
        {
            cout<<"YES\n";
            for(int j=0;j<i;j++)
                cout<<s[j];
            cout<<"\n";
            for(int j=i;j<n;j++)
                cout<<s[j];
            return 0;
        }
    }

    cout<<"NO\n";
    
    return 0;
}
