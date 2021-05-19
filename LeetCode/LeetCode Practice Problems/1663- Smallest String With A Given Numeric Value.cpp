class Solution {
public:
    string getSmallestString(int n, int k) {
        string res(n , 'a');
        k -= n;
        n--;
        
        while(k > 0) {
            int left = min(25 , k);
            res[n] += left;
            k -= left;
            n--;
        }
        
        return res;
    }
};
