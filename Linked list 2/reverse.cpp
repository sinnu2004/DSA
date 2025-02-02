// leetcode optimize soln
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
};

// brute force solution 

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
ListNode* getNodeAt(ListNode* head,int idx){
    ListNode* temp = head;
    for(int i=1;i<=idx;i++){
        temp = temp->next;
    }
    return temp;
}
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
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
    int n = 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        ListNode* left = getNodeAt(head,i);
        ListNode* right = getNodeAt(head,j);
        int t = left->val;
        left->val = right->val;
        right->val = t; 
        i++;
        j--;
    }
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }

    // recursive solution;

    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};
}