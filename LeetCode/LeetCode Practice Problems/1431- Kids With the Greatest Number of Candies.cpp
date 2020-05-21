class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans; 
        int maxi = candies[0];
        for(auto i : candies)
            maxi = max(maxi , i);
        
        for(auto i : candies)
        {
            if(i+extraCandies >= maxi)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
    }
};
