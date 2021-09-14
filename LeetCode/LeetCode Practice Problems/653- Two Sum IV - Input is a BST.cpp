class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        map<int,int> m;
        
        queue<TreeNode*> q;
        if(root != NULL) {
            q.push(root);
        }
        
        while(!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            
            m[t->val]++;
            
            if(t->left != NULL) q.push(t->left);
            if(t->right != NULL) q.push(t->right);
        }
        for(auto i: m) {
            int left = k - i.first;
            m[i.first]--;
            if(m.find(left) != m.end() && m[left] > 0) return true;
            m[i.first]++;
        }
        
        return false;
    }
};
