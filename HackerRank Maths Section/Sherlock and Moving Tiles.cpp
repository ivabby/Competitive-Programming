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
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll z,s1,s2;
    cin>>z>>s1>>s2;
    ll q;
    cin>>q;
    while(q--)
    {
        ll k;
        cin>>k;

        double ans = (double)((sqrt(2)) * ((double)z - (double)sqrt(k)))/abs(s1-s2);
        printf("%.5f\n" , ans);
    }
    return 0;
}
