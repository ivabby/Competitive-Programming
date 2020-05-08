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
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int tot = 1 , cnt = 0;

        for(int i=2;i*i <= n;i++)
        {
            if(n%i == 0)
            {
                tot++;
                int v = sqrt(i);
                if(v*v == i && i%2 == 0)
                    cnt++;

                if(n/i != i)
                {
                    tot++;
                    v = sqrt(n/i);
                    if(v*v == n/i && (n/i)%2 == 0)
                        cnt++;
                }
            }
        }

        if(cnt == 0)
            cout<<"0\n";
        else
        {
            int gcd = __gcd(cnt , tot);
            cout<<cnt/gcd<<"/"<<tot/gcd<<"\n";
        }
        

    }
    
    return 0;
}
