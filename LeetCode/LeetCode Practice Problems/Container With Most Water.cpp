class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0 , j = h.size() - 1;
        int maxi = 0;
        while(i<j)
        {
            maxi = max(maxi , min(h[i] , h[j]) * (j-i));
            if(h[i] < h[j])
                i++;
            else
                j--;
        }
        return maxi;
    }
};
