#include <bits/stdc++.h>
using namespace std;

map<long long,long long> m;

void solve(){
    for(long long i=1;i<=3000;i++)
        for(long long j=i+1;j<=3000;j++)
        {
            long long k = sqrt(i*i + j*j);
            if((i*i + j*j) != (k*k)) continue;
            m[i+j+k] = i*j*k;
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
        long long n;
        cin>>n;
        if(m[n] == 0) cout<<"-1\n";
        else cout<<m[n]<<"\n";
    }

	return 0;
}
