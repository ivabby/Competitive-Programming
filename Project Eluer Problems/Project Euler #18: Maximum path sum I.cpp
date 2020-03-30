#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[20][20] , b[20][20];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin>>n;

        for(int i=0;i<n;i++)
            for(int j=0;j<=i;j++)
            {
                cin>>a[i][j];
                b[i][j] = 0;
            }

        b[0][0] = a[0][0];
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n;j++)
            {
                b[i+1][j] = max(b[i+1][j] , b[i][j] + a[i+1][j]);
                b[i+1][j+1] = max(b[i+1][j+1] , b[i][j] + a[i+1][j+1]);
            }
        
        int maxi = 0;
        for(int j=0;j<n;j++)
            maxi = max(maxi , b[n-1][j]);
        cout<<maxi<<"\n";
	}

	return 0;
}
