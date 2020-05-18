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
    
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    forr(0,n-1)
        cin>>a[i];

    set<int> s;
    s.insert(1);
    forr(1,n-1)
    {
        if((a[i]%a[i-1]) != 0)
            s.insert(i+1);
    }

    while(q--)
    {
        int t;
        cin>>t;
        if(t == 1)
        {
            int m,d;
            cin>>m>>d;
            a[m-1] = d;

            if(m == 1)
            {
                if(a[1]%a[0] == 0)
                    s.erase(2);
                else
                    s.insert(2);
            }
            else if(m == n)
            {
                if((a[n-1]%a[n-2]) == 0)
                    s.erase(n);
                else
                    s.insert(n);
            }
            else
            {
                if((a[m-1]%a[m-2]) == 0)
                    s.erase(m);
                else
                    s.insert(m);
                if((a[m]%a[m-1]) == 0)
                    s.erase(m+1);
                else
                    s.insert(m+1);
            }
        }
        else
        {
            int v;
            cin>>v;
            auto it = s.upper_bound(v);
            it--;
            cout<<*it<<"\n";
        }
    }

    
    return 0;
}
