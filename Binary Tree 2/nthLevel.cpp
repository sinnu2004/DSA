#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
void display(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
// level order traversal left to right
// void nthlevel(TreeNode* root,int curr,int n){
//     if(root==NULL) return;
//     if(curr==n) {
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevel(root->left,curr+1,n);
//     nthlevel(root->right,curr+1,n);
// }
void nthlevel(TreeNode* root,int curr,int n,vector<int>& ans){
    if(root==NULL) return;
    if(curr==n) {
        cout<<root->val<<" ";
        ans[n] += root->val;
        return;
    }
    nthlevel(root->left,curr+1,n,ans);
    nthlevel(root->right,curr+1,n,ans);
}
// level order traversal right to left
void nthlevel2(TreeNode* root,int curr,int n){
    if(root==NULL) return;
    if(curr==n){
        cout<<root->val<<" ";
        return;
    }
    nthlevel2(root->right,curr+1,n);
    nthlevel2(root->left,curr+1,n);
}
void levelorder(TreeNode* root,vector<int>& ans){
    int n = level(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i,ans);
        cout<<endl;
    }
}
int main(){
    TreeNode* a = new TreeNode(1);  // root NOde 
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);
    cout<<endl;

    int len = level(a);
    vector<int> ans(len);
    //cout<<level(a)<<endl;
    levelorder(a,ans);
    for(int i=1;i<=ans.size();i++){
        cout<<ans[i]<<" ";
    }
}