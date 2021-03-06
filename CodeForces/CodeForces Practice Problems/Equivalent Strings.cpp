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
bool check(string a,string b)
{
    sort(all(a));
    sort(all(b));
    if(a == b) return true;
    return false;
}

string solve(string x)
{
    int n = x.length();
    if(n%2) return x;
    string a = solve(x.substr(0,n/2));
    string b = solve(x.substr(n/2,n));
    return a<b?(a+b):(b+a);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string a,b;
    cin>>a>>b;

    if(solve(a) == solve(b))
        cout<<"YES";
    else
        cout<<"NO";


    
    return 0;
}
