/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    void nthlevel(TreeNode* root,int curr,int n,vector<int>& ans){
        if(root==NULL) return;
        if(curr==n){
            ans[curr] = root->val;
            return;
        }
        nthlevel(root->left,curr+1,n,ans);
        nthlevel(root->right,curr+1,n,ans);
    }
    void levelorder(TreeNode* root,vector<int>& ans){
        int n = level(root);
        for(int i=0;i<n;i++){
            nthlevel(root,0,i,ans);
            cout<<endl;
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(level(root),0);
        levelorder(root,ans);
        return ans;
    }
};