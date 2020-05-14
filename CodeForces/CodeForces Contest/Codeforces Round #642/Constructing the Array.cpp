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
class cc{
    public:
        bool operator()(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b)
    {
        if(a.first > b.first)
            return true;
        if(a.second.first < b.second.first)
            return true;

        return false;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
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
        vector<int> a(n+10);
        priority_queue<pair<int, int>> p;
        p.push(mp(n , -1));

        int j = 1;
        int k = n;
        while(k--)
        {
            pair<int,int> pp = p.top();
            p.pop();

            if(pp.first % 2 == 1)
            {
                int start = -pp.second;
                int end = start + pp.first - 1;
                int pos = (start + end)/2;
                a[pos] = j;

                int sz1 = pos - start;
                int sz2 = end - pos;
                p.push(mp(sz1 , -start));
                p.push(mp(sz2 , -(pos + 1)));
            }

            else
            {
                int start = -pp.second;
                int end = start + pp.first - 1;
                int pos = (start + end  - 1)/2;

                a[pos] = j;

                int sz1 = pos - start;
                int sz2 = end - pos;
                p.push(mp(sz1 , -start));
                p.push(mp(sz2 , -(pos + 1)));
            }
            j++;
        }

        forr(1,n)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    
    return 0;
}
