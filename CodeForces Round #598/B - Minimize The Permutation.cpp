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
    ll ans = 1;
    while(y>0)
    {
        if(y%2 == 1)
            ans = ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}
int t,n,a[N];
int find(int pos)
{
    int index = pos;
    int mini = a[pos];
    forr(pos,n)
    {
        if(mini > a[i])
        {
            mini = a[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int index = 1 , mini = 110;
        forr(1,n) cin>>a[i];

        string ans = "";
        int i = 1;
        while(i<n)
        {
            int pos = find(i);
            int value = a[pos];
            // cout<<i<<" "<<value<<" "<<pos<<"\n";
            for(int j=pos;j>i;j--)
            {
                a[j] = a[j-1];
            }
            a[i] = value;
            if(pos == i)
                i+=1;
            else
                i = pos;
            
        }
        forr(1,n) cout<<a[i]<<" ";
            cout<<"\n";
    }
    return 0;
}
