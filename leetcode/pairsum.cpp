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

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void inserAtEnd(Node* head,int val){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
}
int p(Node* a,int& count){
    if(count>=3) return 0;
    p(a->next,count);
    return a->val;
}
void pairsum(Node* a,Node* temp){
    
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
    inserAtEnd(a,60);
    display(a);
    Node* temp = a;
    for(int i=0;i<3;i++){
        temp = temp->next;
    }
    int count = 0;
    pairsum(a,temp);
}
