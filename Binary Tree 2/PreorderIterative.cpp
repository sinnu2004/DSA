#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
void display(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
void iterativedisplay(vector<int>& ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
void preorder(TreeNode* a,vector<int>& ans){
    stack<TreeNode*> st;
    if(a!=NULL) st.push(a);
    while(st.size()>0){
        TreeNode* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
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

    vector<int> ans;
    preorder(a,ans);
    iterativedisplay(ans);
}