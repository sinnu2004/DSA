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
void preorder(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";  // root
    preorder(root->left);  // left
    preorder(root->right); // right
}
void Inorder(TreeNode* root){
    if(root==NULL) return;
    Inorder(root->left);  // left
    cout<<root->val<<" "; // root
    Inorder(root->right); // right
}
void postorder(TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);  // left
    postorder(root->right); // right
    cout<<root->val<<" "; // root
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

    preorder(a);
    cout<<endl;
    Inorder(a);
    cout<<endl;
    postorder(a);
    cout<<endl;
    
}