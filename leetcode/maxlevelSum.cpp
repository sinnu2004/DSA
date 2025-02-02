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
void nthlevel(TreeNode* root,int curr,int n,vector<int>& ans){
    if(root==NULL) return;
    if(curr==n){
        ans[n] += root->val;
        cout<<ans[n]<<" ";
        return;
    }
    nthlevel(root->left,curr+1,n,ans);
    nthlevel(root->right,curr+1,n,ans);
}
void levelorder(TreeNode* root,vector<int>& ans){
    int n = level(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i,ans);
        cout<<endl;
    }
}
int main(){
    TreeNode* a = new TreeNode(-100);  // root NOde 
    TreeNode* b = new TreeNode(-200);
    TreeNode* c = new TreeNode(-300);
    TreeNode* d = new TreeNode(-20);
    TreeNode* e = new TreeNode(-5);
    TreeNode* f = new TreeNode(-10);
    //TreeNode* g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    //c->right = g;

    display(a);
    cout<<endl;

    int len = level(a);

    cout<<len<<endl;
    vector<int> ans(len+1,0);
    cout<<endl;

    levelorder(a,ans);
    for(int i=1;i<=ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int max = ans[1];
    int idx = 1;
    for(int i=2;i<ans.size();i++){
        if(ans[i]>max){
            max = ans[i];
            idx = i;
        }
    }
    cout<<idx;
}