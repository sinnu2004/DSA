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
TreeNode* inorder(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right!=NULL){
            pred = pred->right;
        }
        return pred;
    }
    TreeNode* ios(TreeNode* root){
        TreeNode* succ = root->right;
        while(succ->left!=NULL){
            succ = succ->left;
        }
        return succ;
    }
TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        // leaf Node 
        if(root->val==key){
            // case 1 : no child
            if(root->left==NULL && root->right==NULL) return NULL;

            // case 2 : one chile 
            if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }

            // case 3 : two child
            if(root->left!=NULL && root->right!=NULL){
                // replace the rooth with its inorder pred/succ;
                // after replacing delete the pred/succ
                TreeNode* predi = inorder(root);
                root->val = predi->val;
                root->left = deleteNode(root->left,predi->val);
            }
        }
        else if(root->val > key){   // go left 
            root->left = deleteNode(root->left,key);
        }
        else {   // root->val < key // go right
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
int main(){
    TreeNode* a = new TreeNode(10);  // root NOde 
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(20);
    TreeNode* d = new TreeNode(2);
    TreeNode* e = new TreeNode(8);
    TreeNode* f = new TreeNode(15);
    TreeNode* g = new TreeNode(25);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout<<endl;
    deleteNode(a,20);
    display(a);
}