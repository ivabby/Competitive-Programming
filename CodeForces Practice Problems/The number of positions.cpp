#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;

    int before = 0 , last = n ,ans = 0;
    for(int i=0;i<=n;i++)
    {
        if(before>a && last<=b)
        {
            ans++;
        }
        before++;
        last--;
    }
    cout<<ans;
}

int main()
{
    solve();
    return 0;
}
