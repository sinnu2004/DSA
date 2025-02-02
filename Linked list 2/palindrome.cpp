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
ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
int main(){
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(40);
    ListNode* f = new ListNode(30);
    ListNode* g = new ListNode(20);
    ListNode* h = new ListNode(10);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;

    ListNode* head = a;
    ListNode* headt = head;
    ListNode* temp = head;
    ListNode* slow = head;
    ListNode* fast = head;
    while(headt){
        cout<<headt->val<<" ";
        headt = headt->next;
    }
    cout<<endl;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* slowt = slow;
    while(slowt!=NULL){
        cout<<slowt->val<<" ";
        slowt = slowt->next;
    }
    cout<<endl;
    bool flag = true;
    ListNode* z = reverse(slow->next);
    ListNode* t = head;
    while(z){
        if(t->val != z->val) flag = false;
        t = t->next;
        z = z->next;
    }
    if(flag==true) cout<<"it is palindrome :";
    else cout<<"it is not a palindrome :";
}