class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        int maxi = 0;
        for(auto i : root->children)
            maxi = max(maxi , maxDepth(i));
        return maxi+1;
    }
};
