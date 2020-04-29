#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long f[100009];
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,c;
	    int n;
	    cin>>n>>a>>b>>c;
	    
	    for(int i=1;i<=n;i++) cin>>f[i];
	    
	    long long mini = abs(f[1] - b) + c + abs(f[1] - a);
	    
	    for(int i=2;i<=n;i++)
	    {
	        mini = min(mini , abs(f[i] - b) + c + abs(f[i] - a));
	    }
	    cout<<mini<<"\n";
	}
	return 0;
}
