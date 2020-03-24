#include <bits/stdc++.h>
using namespace std;

int main() {
	
    vector<long> prime;
    for(long i=2;i<=1000000;i++)
    {
        bool f = true;
        for(int j=2;j*j<=i;j++)
            if(i%j == 0)
            {
                f = false;
                break;
            }

        if(f) prime.push_back(i);
    }


    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;

        int i = 0 ;
        long s = 0;
        while(i<prime.size() && prime[i]<=n)
        {
            s+=prime[i];
            i++;
        }

        cout<<s<<"\n";
    }

	return 0;
}
