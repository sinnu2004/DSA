#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
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
int maxN(TreeNode* root){
    if(root==NULL) return INT_MIN;
    int lmax = maxN(root->left);
    int rmax = maxN(root->right);
    return max(root->val,max(lmax,rmax));
}
int height(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(height(root->left),height(root->right));
}
int main(){
    TreeNode* a = new TreeNode(1);  // root NOde 
    TreeNode* b = new TreeNode(2);  // a->left 
    TreeNode* c = new TreeNode(2);  // a->right
    TreeNode* d = new TreeNode(3);  // b->left
    TreeNode* e = new TreeNode(3);  // b->right
    TreeNode* f = new TreeNode(4);  // d->left
    TreeNode* g = new TreeNode(4);  // d->right

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    d->left = f;
    d->right = g;
    display(a);
    cout<<endl;
    //cout<<maxN(a)<<endl;
//     int ans = abs(height(a->left)+height(a->right));
//     if(ans>1) cout<<"yes";
//     else cout<<"no";
    int left = height(a->left);
    int right = height(a->right);
    if((left-right)>1) cout<<"yes";
    else "no";
}