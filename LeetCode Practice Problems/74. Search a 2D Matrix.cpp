class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        
        int row = 0;
        int n = matrix.size() , m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0] > target)
                break;
            row = i;
        }
        
        vector<int> v = matrix[row];
        int i = 0 , j = m - 1;
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(v[mid] == target)
                return true;
            if(v[mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        
        return false;
    }
};
