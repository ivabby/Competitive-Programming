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
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,k;
    map<int,int> m;

    cin>>n>>k;
    forr(1,n)
    {
        string s;
        cin>>s;
        m[s.length()]++;
    }

    int s1 = 0 , s2 = 0;
    string s;
    cin>>s;
    int l = s.length();
    for(auto i : m)
    {
        if(i.first == l)
        {
            s2 = s1 + i.second;
            break;
        }
        s1 = s1 + i.second;
    }
    
    s1 = s1 + 1;
    s1 = s1 + ((s1 - 1)/k)*5;
    s2 = s2 + ((s2 - 1)/k)*5;

    cout<<s1<<" "<<s2<<"\n";
    
    return 0;
}
