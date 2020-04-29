class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        vector<int> a;
        if(t%2 == 1) return a;
        int n2 = t/2;
        int n1 = 0;
        while(n1+n2 != c)
        {
            if(n2 == 0) return a;
            if(n2 == 1) break;
            n2-=2;
            n1++;
        }
        if(n1+n2 == c)
        {
            a.push_back(n1);
            a.push_back(n2);
        }
        return a;
    }
};
