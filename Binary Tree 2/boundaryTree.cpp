#include<iostream>
#include<stack>
#include<vector>
#include<climits>
#include<queue>
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
// void displayTree(int& arr[],TreeNode* root){
//     int n = level(root);
//     for(int i=0;i<n;i++){
//         cout<<arr[level(i)]<<" ";
//     }
//     cout<<endl;
// }
TreeNode* construct(int arr[],int n){
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT_MIN) l = new TreeNode(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN) r = new TreeNode(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void nthlevel(TreeNode* root,int curr,int n){
    if(root==NULL) return;
    if(curr==n) {
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,n);
    nthlevel(root->right,curr+1,n);
}
void levelorder(TreeNode* root){
    int n = level(root);
    for(int i=0;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
void leftBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void bottomBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}
void Boundary(TreeNode* root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}
int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = construct(arr,n);
    levelorder(root);
    cout<<endl;
    Boundary(root);
}