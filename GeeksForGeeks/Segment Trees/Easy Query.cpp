#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--)
	{
	    int n,q,i,j ;
	    cin>>n>>q;

	    int a[n+1];   						/* (n+1) for 1 based indexing */
	    
	    for(i=1;i<=n;i++)					/*  input  array   */
	        cin>>a[i];

	    while(q--)       					/* q: number of queries   */
	    {
	        int l , r, k;
	        cin>>l>>r>>k;					/*  input  x,y,k   */

	        int dp[15001]={0};				/*  lookup table   */

	        int m=INT_MIN;

	        for(i=l;i<=r;i++)				/* storing the values in look-up  */
	        {								/* table by marking visited elements   */
	            m = max(m, a[i]);
	            dp[a[i]]++;
	        }

	        int ans = 0;
	        for(i=1;i<=m;i++)				/*    O(n)  as 1<=a[i]<=n   */
	        {
	            ans = ans + dp[i];
	            if(ans>=k)
	            {
	                cout<<i<<" ";
	                break;
	            }
	        }
	    }
	    cout<<endl;
	    
	}
}
