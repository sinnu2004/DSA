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
    cout<<endl;
}
void Inorder(TreeNode* root,vector<int>& ans){
    TreeNode* node = root;
    stack<TreeNode*> st;
    while(st.size()>0 || node!=NULL){
        if(node!=NULL) {
            st.push(node);
            node = node->left;
        }
        else {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            node = temp->right;
        }
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
    Inorder(a,ans);
    iterativedisplay(ans);
    
}