#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 20;
    long long a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    long long ans = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //  Left To Right Product
            if(j<n-3)
            {
                ans = max(ans , a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3]);
            }

            //  Top To Bottom Product
            if(i<n-3)
            {
                ans = max(ans , a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j]);
            }

            //  Top To Down Diaognal
            if(i<n-3 && j<n-3)
            {
                ans = max(ans , a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3]);
            }

            //  Bottom To Top Diagonal
            if(i>=3 && j<n-3)
            {
                ans = max(ans , a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3]);
            }
        }
    }

    cout<<ans;
	return 0;
}
