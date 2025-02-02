#include<iostream>
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
void morrisTraversal(TreeNode* root){
    TreeNode* curr = root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            TreeNode* pred = curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred = pred->right;
            }
            if(pred->right==NULL){
                pred->right = curr;
                curr = curr->left;
            }
            if(pred->right==curr){
                pred->right = NULL;
                cout<<curr->val<<" ";
                curr = curr->right;
            }
        }
        else {
            cout<<curr->val<<" ";
            curr = curr->right;
        }
    }
}
int main(){
    TreeNode* a = new TreeNode(10);  // root NOde 
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(15);
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(8);
    TreeNode* f = new TreeNode(12);
    TreeNode* g = new TreeNode(20);
    TreeNode* h = new TreeNode(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    f->left = h;
    display(a);
    cout<<endl;
    morrisTraversal(a);
    
}