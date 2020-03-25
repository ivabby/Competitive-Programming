#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n , c = 0;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		{
			int k = (int) sqrt(i*i + j*j);
			if((i*i +j*j) != k*k) continue;

			if(k<=n) c++;
		}

	cout<<c;
	return 0;
}
