#include <bits/stdc++.h>
using namespace std;
map<int , int> m;
void solve(){
    int k = 1;
    for(int i=2;i<=1000000;)
    {
        bool f = true;
        for(int j=2;j*j<=i;)
        {
            if(i%j == 0)
            {
                f = false;
                break;
            }
            j = (j == 2)?3:j+2;
        }

        if(f) m[k++] = i;
        i = (i==2)?3:i+2;
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
