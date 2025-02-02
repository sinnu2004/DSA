#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);
    ListNode* f = new ListNode(60);
    ListNode* g = new ListNode(25);
    ListNode* h = new ListNode(15);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;

    ListNode* head = a;
    ListNode* temp = head;
    int n = 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        
    }
}