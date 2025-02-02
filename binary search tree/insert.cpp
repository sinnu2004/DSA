TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        else if(root->val > val){   // go left
            if(root->left==NULL){ // attach it here
                TreeNode* temp = new TreeNode(val);
                root->left = temp;
            }
            else insertIntoBST(root->left,val);
        }
        else{  // go right (root->val < val);
            if(root->right==NULL){
                TreeNode* temp = new TreeNode(val);
                root->right = temp;
            }
            else insertIntoBST(root->right,val);
        }
        return root;
    }