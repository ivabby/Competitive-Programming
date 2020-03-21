#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    vector<int> a(12);
    cin>>k;
    for(int i=0;i<12;i++)   cin>>a[i];

    sort(a.begin() , a.end());
    int cnt = 0;

    for(int i=11;i>=0;i--)
    {
        
        if(k <= 0) break;
        k = max(0 , k - a[i]);
        cnt++;
    }
    if(k > 0) cnt = -1;
    cout<<cnt;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solve();
    return 0;
}
