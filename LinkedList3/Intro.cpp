#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class ListNode{
    public:
    ListNode* head;
    ListNode* tail;
    int size;
    ListNode{
        head=tail= NULL;
        size = 0;
    }
    void display(ListNode* head){
        ListNode* temp = head;
        while(temp){
            cout<<temp.
        }
    }
};
int main(){
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;

    ListNode* head = a;
    ListNode* tail = e;
    
}
