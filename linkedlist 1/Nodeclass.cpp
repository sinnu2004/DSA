#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // making linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout<<((b.next)->next)->val<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;

    // print all the value of linkedlist using loop

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}