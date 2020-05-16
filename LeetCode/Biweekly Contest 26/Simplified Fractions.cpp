class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> a;
        if(n == 1)
            return a;
        
        for(int d=2;d<=n;d++)
        {
            for(int b=1;b<d;b++)
            {
                if(__gcd(b,d) == 1)
                    a.push_back(to_string(b) + "/" + to_string(d));
            }
        }
        
        return a;
    }
};
