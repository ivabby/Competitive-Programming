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
        int n,k,l;
        cin>>n>>k>>l;

        vector<int> d(n+2 , -k);
        forr(i,1,n+1) cin>>d[i];

        set<tuple<int,int,bool>> mark;

        function<bool(int,int,bool)> go = [&](int pos,int tide,bool down){
            if(pos > n) return true;

            if(mark.find({pos,tide,down}) != mark.end())
                return false;

            mark.insert({pos,tide,down});

            tide += down ? -1 : +1;
            if(tide == 0) down = false;
            if(tide == k) down = true;

            if(d[pos] + tide <= l && go(pos,tide,down))
                return true;
            if(d[pos + 1] + tide <= l && go(pos + 1, tide , down))
                return true;
            return false;
        };

        if(go(0,0,false)) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
