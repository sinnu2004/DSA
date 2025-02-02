#include<iostream>
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
int successor(TreeNode* root){
    if(root->right==NULL) return 0;
    TreeNode* succ = root->right;
    while(succ->left!=NULL){
        succ = succ->left;
    }
    return succ->val;
}
int main(){
    TreeNode* a = new TreeNode(10);  // root NOde 
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(20);
    TreeNode* d = new TreeNode(2);
    TreeNode* e = new TreeNode(8);
    TreeNode* f = new TreeNode(15);
    TreeNode* g = new TreeNode(25);
    TreeNode* h = new TreeNode(12);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    f->left = h;
    display(a);
    cout<<endl;
    cout<<successor(a);
}