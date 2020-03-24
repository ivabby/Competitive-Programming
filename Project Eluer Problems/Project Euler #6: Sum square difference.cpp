#include <bits/stdc++.h>
using namespace std;
map<int , long long> m;
void solve(){
    long long p = 0 , s = 0;
    for(int i=1;i<=10000;i++)
    {
        p+=(i * i);
        s+=i;


        m[i] = s*s - p; 
    }
}
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
	
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
