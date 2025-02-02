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
int good(TreeNode* root,int pre,int& count){
    if(root==NULL) return 0;
    if(root->val>=pre){
        count++;
        cout<<root->val<<" ";
        cout<<"pre :"<<pre<<" ";
    }
    good(root->left,pre,count);
    good(root->right,pre,count);
    return count;
}
int main(){
    TreeNode* a = new TreeNode(3);  // root NOde 
    TreeNode* b = new TreeNode(4);   // 3,1,4,3,null,1,5
    TreeNode* c = new TreeNode(10);
    TreeNode* d = new TreeNode(8);
    TreeNode* e = new TreeNode(4);
    // TreeNode* f = new TreeNode(1);
    // TreeNode* g = new TreeNode(5);

    a->right = b;
    b->left = c;
    b->right = d;
    d->left = e;
    // c->left = f;
    // c->right = g;

    display(a);
    cout<<endl;

    int pre = a->val;
    int count = 0;
    cout<<good(a,pre,count);
    cout<<endl;
    cout<<count<<endl;
}