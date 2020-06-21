#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
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
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    string s,t;
    cin>>n>>s>>t;

    int c1 = 0 , c2 = 0;
    for(char c : s)
        c1 += (c == '1');
    
    for(char c : t)
        c2 += (c == '1');

    if(c1 != c2)
    {
        cout<<"-1\n";
        return 0;
    }

    vector<int> p;
    for(int i=0;i<n;i++)
        if(s[i] != t[i])
            p.pb((s[i] == '0'));


    int ans = 0;
    c1 = 0 , c2 = 0;
    for(auto i : p)
    {
        if(i == 0)
        {
            if(c1)
                c1--,c2++;
            else
                ans++,c2++;
        }
        else
        {
            if(c2)
                c2--,c1++;
            else
                ans++,c2++;
        }
    }

    cout<<ans;

    return 0;
}
