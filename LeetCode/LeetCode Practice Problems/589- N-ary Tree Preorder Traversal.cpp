class Solution {
public:
    vector<int> ans;
    
    void traverse(Node* root) {
        if(root == NULL) 
            return;
        
        ans.push_back(root->val);
        
        for(auto i: root->children) {
            traverse(i);
        }
    }
    
    vector<int> preorder(Node* root) {
        traverse(root);
        return ans;
    }
};
