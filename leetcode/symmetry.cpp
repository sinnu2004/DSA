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
    if(root==NULL){
        cout<<"NULL"<<" ";
        return;
    }
    cout<<root->val<<"->";
    display(root->left);
    display(root->right);
}
void invert(TreeNode* symmetry){
    if(symmetry==NULL) return;
    swap(symmetry->left,symmetry->right);
    invert(symmetry->left);
    invert(symmetry->right);
}
bool ans(TreeNode* symmetyr,TreeNode* root){
    if(symmetyr==NULL && root==NULL) return true;
    if(symmetyr==NULL || root==NULL) return false;

    if(symmetyr->val != root->val) return false;

    bool leftans = ans(symmetyr->left,root->right);
    if(leftans==false) return false;
    bool rightans = ans(symmetyr->right,root->left);
    if(rightans==false) return false;

    return true;
    
}
int main(){
    TreeNode* a = new TreeNode(1);  // root NOde 
    TreeNode* b = new TreeNode(2);  // 1,2,2,null,3,null,3
    TreeNode* c = new TreeNode(2);
    TreeNode* e = new TreeNode(3);
    TreeNode* g = new TreeNode(3);

    a->left = b;    
    a->right = c;
    b->right = e;
    c->right = g;

    display(a);
    cout<<endl;

    TreeNode* symmetry = a;
    // display(symmetry);
    // cout<<endl;

    invert(symmetry->left);
    display(symmetry);
    cout<<endl;

    // bool check = ans(symmetry,a);
    // if(check==true) cout<<"true";
    // else cout<<"false";
}