#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k;
queue<int> a[1009];
bool vis[1009];
string st[1009];
bool flag;
long long maxi;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    string s;
	    maxi = LONG_MAX;
	    flag = false;
	    for(int i=0;i<n;i++)
	    {
	        cin>>st[i];
	        vis[i] = false;
	    }
	    if(st[0][0] == '1')
	    {
	        queue<int> q;
	        q.push(0);
	        vis[0] = true;
	        long long cnt = 0;
	        while(q.size() > 0)
	        {
	            bool flag = false;
	            queue<int> a;
	            while(q.size() > 0)
	            {
	                int i = q.front();
	                if(i == n-1)
	                {
	                    flag = true;
	                    break;
	                }
	                q.pop();
	                for(int j=max(0,i-k);j<=min(n-1,i+k);j++)
        	        {
        	            if(i==j || st[i][j] == '0' || vis[j]) continue;
        	            a.push(j);
        	            vis[j] = true;
        	        }
	            }
	            q = a;
	            if(flag)
	            {
	                maxi = cnt;
	                break;
	            }
	            cnt++;
	        }
	    }
	    
	    if(maxi == LONG_MAX)
	        maxi = -1;
	        
	   cout<<maxi<<"\n";
	}
	return 0;
}
