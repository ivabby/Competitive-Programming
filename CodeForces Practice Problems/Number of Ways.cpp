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
const int N = (int)100 + 9;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    long long s = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s += a[i];
    }

    if(s%3 != 0)
        cout<<"0";
    else{
        s /= 3;
        vector<int> cnt(n , 0);
        ll ss = 0;
        for(int i=n-1;i>=0;i--)
        {
            ss += a[i];
            if(ss == s)
                cnt[i] = 1;
        }

        for(int i=n-2;i>=0;i--)
            cnt[i] += cnt[i+1];

        ll ans = 0;
        ss = 0;
        for(int i=0;i+2<n;i++)
        {
            ss += a[i];
            if(ss == s)
                ans += cnt[i+2];
        }

        cout<<ans;
    }
    return 0;
}
