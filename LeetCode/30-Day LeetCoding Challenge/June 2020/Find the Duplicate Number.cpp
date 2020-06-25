class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            int pos = abs(a[i]);
            if(a[pos - 1] < 0)
                return pos;
            a[pos - 1] = -a[pos - 1];
        }
        
        return -1;
    }
};
