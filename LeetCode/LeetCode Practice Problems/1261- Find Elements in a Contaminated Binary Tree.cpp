class FindElements {
public:
    TreeNode* r;
    map<int,bool> m;
    
    FindElements(TreeNode* root) {
        r = root;
        
        queue<TreeNode*> q1;
        queue<int> q2;
        q1.push(r);
        q2.push(0);
        
        while(!q1.empty()) {
            int val = q2.front();
            q2.pop();
            TreeNode* t = q1.front();
            q1.pop();
            
            m[val] = true;
            
            if(t->left != NULL) {
                q1.push(t->left);
                q2.push(val*2+1);
            }
            if(t->right != NULL) {
                q1.push(t->right);
                q2.push(val*2+2);
            }
        }
        
    }
    
    bool find(int target) {
        return m[target];
        
    }
};
