#include <bits/stdc++.h>
using namespace std;
map<int , int> m;
void solve(){
    int p = 1;
    for(int i=1;i<=40;i++)
    {
        int s = p;
        int gcd = __gcd(i , s);
        p = p * (i/gcd);
        m[i] = p;
    }
}
int main() {
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<m[n]<<"\n";
    }

	return 0;
}
