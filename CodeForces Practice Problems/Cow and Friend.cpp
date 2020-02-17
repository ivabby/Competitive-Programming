#include<bits/stdc++.h>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        bool f = false;
        ll maxi = -1;
        vector<ll> p(n);
        forr(0,n-1)
        {
            cin>>p[i];
            if(p[i] == x)
                f = true;
            maxi = max(maxi , p[i]);
        }
        if(f)
        {
            cout<<"1\n";
        }
        else{
            if(maxi > x)
                cout<<"2\n";
            else
            {
                ll ans = x/maxi;
                if(x%maxi)
                    ans++;
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}
