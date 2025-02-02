#include<iostream>
#include<climits>
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
void MinTree(TreeNode* root,int& mn){
    if(root==NULL) return;
    mn = min(root->val,mn);
    MinTree(root->left,mn);
    MinTree(root->right,mn);
}
int main(){
    TreeNode* a = new TreeNode(10);  // root NOde 
    TreeNode* b = new TreeNode(200);  
    TreeNode* c = new TreeNode(30);
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

    int mn = INT_MAX;
    
    MinTree(a,mn);
    cout<<mn<<endl;
}