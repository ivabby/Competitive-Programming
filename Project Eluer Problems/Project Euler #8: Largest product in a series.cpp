#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
	
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        long long p = 0;
        for(int i=0;i<n-k;i++)
        {
            long long cur = 1;
            for(int j=i;j<i+k;j++)
                cur*=(s[j] - '0');
            p = max(p , cur);
        }
        cout<<p<<"\n";
    }

	return 0;
}
