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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);

        int odd = 0 , even = 0;
        int s1 = 0 , s2 = 0;
        forr(i,0,n)
        {
            cin>>a[i];
            if(i%2 == 0)
            {
                if(a[i]%2 == 0)
                    even++;
                else
                    s1++;
            }
            else
            {
                if(a[i]%2 == 1)
                    odd++;
                else
                    s2++;
            }
        }   

        if(n==1)
        {
            if(even == 0) cout<<"-1\n";
            else cout<<"0\n";
        }
        else{
            if(s1 == s2) cout<<s1<<"\n";
            else cout<<"-1\n";
        }
    }

    return 0;
}
