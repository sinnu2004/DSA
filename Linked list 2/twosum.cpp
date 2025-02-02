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
    ListNode* a = new ListNode(2);  // 2,4,3   l1   342+465 = 807  = 708
    ListNode* b = new ListNode(4);  // 5,6,4   l2
    ListNode* c = new ListNode(3);  // 5,6,4   l2

    /*ListNode* a = new ListNode(1);  // 2,4,3   l1   342+465 = 807  = 708
    ListNode* b = new ListNode(0);  // 5,6,4   l2
    ListNode* c = new ListNode(0);  // 5,6,4   l2
    ListNode* d = new ListNode(0);  // 5,6,4   l2
    ListNode* e = new ListNode(0);  // 5,6,4   l2
    ListNode* f = new ListNode(0);  // 5,6,4   l2
    ListNode* g = new ListNode(0);  // 5,6,4   l2
    ListNode* h = new ListNode(0);  // 5,6,4   l2
    ListNode* i = new ListNode(0);  // 5,6,4   l2
    ListNode* j = new ListNode(0);  // 5,6,4   l2
    ListNode* k = new ListNode(0);  // 5,6,4   l2
    ListNode* l = new ListNode(0);  // 5,6,4   l2
    ListNode* m = new ListNode(0);  // 5,6,4   l2
    ListNode* n = new ListNode(0);  // 5,6,4   l2
    ListNode* o = new ListNode(0);  // 5,6,4   l2
    ListNode* p = new ListNode(0);  // 5,6,4   l2
    ListNode* q = new ListNode(0);  // 5,6,4   l2
    ListNode* z = new ListNode(0);  // 5,6,4   l2
    ListNode* s = new ListNode(0);  // 5,6,4   l2
    ListNode* t = new ListNode(1);  // 2,4,3   l1*/


    ListNode* v = new ListNode(5);   //  243 + 564 = 
    ListNode* w = new ListNode(6);
    ListNode* x = new ListNode(4);

    a->next = b;
    b->next = c;
    /*c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    k->next = l;
    l->next = m;
    m->next = n;
    n->next = o;
    o->next = p;
    p->next = q;
    q->next = z;
    z->next = s;
    s->next = t;*/

    v->next = w;
    w->next = x;

    ListNode* l1 = a;
    ListNode* l2 = v;

    //ListNode* left = reverse(l1);
    //ListNode* right = reverse(l2);
    ListNode* tempA = l1;
    ListNode* tempB = l2;
    //int A = 0;   // 342
    //int B = 0;   // 465 

    ListNode* result = new ListNode(100);
    ListNode* temp = result;
    while(tempA!=NULL || tempB!=NULL){
        int v = 0;
        if(tempB==NULL) v = tempA->val + 0;
        else if(tempA==NULL) v = tempB->val + 0;
        else {
            v = tempA->val + tempB->val;
            if(v>=10){
                int n = 0;
                if(tempA->next!=NULL){
                    n = v%10;
                    ListNode* t = new ListNode(n);
                    temp->next = t;
                    tempB->next->val += v/10;
                    temp = temp->next;
                }
                else {
                    n = v;
                    ListNode* t = new ListNode(n);
                    temp->next = t;
                    temp = temp->next;
                }
            }
            else {
                ListNode* t = new ListNode(v);
                temp->next = t;
                temp = temp->next;
            }
        }
        tempA = tempA->next;
        tempB = tempB->next;
    }

    result = result->next;
    while(result){
        cout<<result->val<<" ";
        result = result->next;
    }

    /*while(tempA!=NULL){
        A = A*10 + tempA->val;
        tempA = tempA->next;
    }
    cout<<"A :"<<A<<endl;  // 342
    while(tempB){
        B = B*10 + tempB->val;
        tempB = tempB->next;
    }
    cout<<"B :"<<B<<endl;  // 465

    int result = A+B;   
    cout<<"result :"<<result<<endl;  // 8 0 7
    ListNode* temp = new ListNode(100);
    ListNode* r = temp;
    while(result>0){
        int v = result%10;
        ListNode* t = new ListNode(v);
        temp->next = t;
        temp = temp->next;
        result = result/10;
    }
    r = r->next;
    while(r){  // 7 0 8
        cout<<r->val<<" ";
        r = r->next;
    }*/
}

/*/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
public:
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = reverse(l1);
        ListNode* b = reverse(l2);
        ListNode* tempA = a;
        ListNode* tempB = b;
        long long int A = 0;
        long long int B = 0;
        while(tempA){
            A = A*10 + tempA->val;
            tempA = tempA->next;
        }
        while(tempB){
            B = B*10 + tempB->val;
            tempB = tempB->next;
        }
        long long int result = A+B;
        ListNode* temp = new ListNode(0);
        ListNode* r = temp;
        if(result==0) return r;
        while(result>0){
            long long int v = result%10;
            ListNode* t = new ListNode(v);
            temp->next = t;
            temp = temp->next;
            result = result/10;
        }
        return r->next;
    }
};*/