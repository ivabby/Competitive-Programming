class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> d;
        int n = deck.size();
        for(int i=0;i<n;i++) {
            d.push_back(i);
        }
        
        sort(deck.begin() , deck.end());
        vector<int> ans(n);
        for(auto i: deck) {
            int pos = d.front();
            d.pop_front();
            ans[pos] = i;
            
            if(!d.empty()) {
                pos = d.front();
                d.pop_front();
                d.push_back(pos);
            }
        }
        
        return ans;
    }
};
