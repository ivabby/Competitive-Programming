class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        
        for(int i=0;i<a.size()-1 && a.size()>0;) {
            if(a[i] > 0 && a[i+1] < 0) {
                if(a[i] > abs(a[i+1])) {
                    a.erase(a.begin()+i+1);
                } else if(a[i] < abs(a[i+1])){
                    a.erase(a.begin()+i);
                } else {
                    a.erase(a.begin()+i);
                    a.erase(a.begin()+i);
                }
                i = max(0,i-1);
            } else {
                i++;
            }
        }
        
        return a;
        
    }
};
