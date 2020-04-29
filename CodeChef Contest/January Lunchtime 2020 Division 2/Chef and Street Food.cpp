#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long maxi = 0;
	    while(n--)
	    {
	        long long s,v,p;
	        cin>>s>>p>>v;
	        s = v*(p/(s+1));
	        maxi = max(maxi , s);
	    }
	    cout<<maxi<<"\n";
	}
	return 0;
}
