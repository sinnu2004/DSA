#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int val;
        int adhar;
        Node* next;
        Node(int val, int adhar){
            this->adhar = adhar;
            this->val = val;
            this->next = NULL;
        }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int Nodesize(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void RecursiveDis(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    return RecursiveDis(head->next);
}
void inserAtEnd(Node* head,int val){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
}
int main(){
    Node* a = new Node(10);    // starting member is known as head 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);  // last member is known as tail
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
}