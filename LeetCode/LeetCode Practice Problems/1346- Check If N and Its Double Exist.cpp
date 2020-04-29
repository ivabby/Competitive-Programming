class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                if(i!=j && a[i]*2 == a[j])
                    return true;
        }
        return false;
    }
};
