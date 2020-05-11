class Codec {
public:
    
    static TreeNode* insert(TreeNode* root,int v)
    {
        if(root == NULL)
        {
            root = new TreeNode(v);
            return root;
        }
        
        if(root->val > v)
            root->left = insert(root->left , v);
        else
            root->right = insert(root->right , v);
        
        return root;
    }
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL)
            return "";
        
        string ans = "";
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* t = q.front();
            q.pop();
            
            ans = ans + to_string(t->val) + ".";
            
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
        
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string a) {
        if(a == "")
            return NULL;
        
        TreeNode* root = NULL;   
        int n = a.size();
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int v = 0;
            while(i+1<n && a[i] != '.')
            {
                v = v*10 + (a[i] - '0');
                i++;
            }
            
            b.push_back(v);
        }
        
        for(auto i : b)
            root = insert(root , i);
        
        
        return root;
    }
};
