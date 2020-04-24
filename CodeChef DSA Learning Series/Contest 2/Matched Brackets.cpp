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
    
    int n;
    cin>>n;
    vector<int> a(n);
    forr(0,n-1) cin>>a[i];

    stack<int> s;
    int c1 = 0 , p1 = 0 , c2 = 0 , p2 = 0;
    int start = 0;
    forr(0,n-1)
    {
        if(a[i] == 1)
        {
            s.push(i);
            if(s.size() > c2)
            {
                p2 = i + 1;
                c2 = s.size();
            }
        }
        else
        {
            int v = s.top() - 1;
            s.pop();

            if(i - v > c1)
            {
                c1 = i - v;
                p1 = v + 2;
            }
        }
    }

    cout<<c2<<" "<<p2<<" "<<c1<<" "<<p1;

    
    return 0;
}
