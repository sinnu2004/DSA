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

    int x = 41;
    ListNode* low = new ListNode(100);
    ListNode* high = new ListNode(200);
    ListNode* templ = low;
    ListNode* temph = high;
    ListNode* temp = head;
    while(temp!=NULL){
        if(temp->val<x){
            templ->next = temp;
            temp = temp->next;
            templ = templ->next;
        }
        else {
            temph->next = temp;
            temp = temp->next;
            temph = temph->next;
        }
    }
    templ->next = high->next;
    temph->next = NULL;
    low = low->next;
    while(low!=NULL){
        cout<<low->val<<" ";
        low = low->next;
    }
}