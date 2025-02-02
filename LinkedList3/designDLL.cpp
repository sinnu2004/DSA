#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        head = tail = NULL;
        size = 0;
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        if(size==0) return -1;
        if(index==0) return head->val;
        else if(index==size-1) return tail->val;
        else {
            if(index<=size/2){
            Node* temp = head;
            for(int i=0;i<index;i++){
                temp = temp->next;
            }
            return temp->val;
            }
            else {
                Node* temp = tail;
                for(int i=0;i<size-index;i++){
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            temp->prev = NULL;   // extra
            head = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;   // extra
            tail = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0) addAtHead(val);
        else if(index==size) addAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=index-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            t->prev = temp;   // extra
            t->next->prev = t; // extra 
            temp->next = t;
            size++;
        }
    }
    
    void deleteAtHead(){
        if(size==0) return;
        head = head->next;
        if(head!=NULL) head->prev = NULL;   // extra + imp
        if(head==NULL) tail = head;    // extra + imp 
        size--;
    }

    void deleteAtTail(){
        if(size==0) return;
        else if(size==1) {
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;  // extra 
        temp->next = NULL;   // extra
        tail = temp;  // extra 
        size--;
    }

    void deleteAtIndex(int index) {
        if(size==0) return;
        else if(index<0 || index>=size) return;
        else if(index==0) deleteAtHead();
        else if(index==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=index-1;i++){
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
            temp->next->prev = temp;  // extra 
            size--;
        }
    }

    void displayAthead(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void displayAttail(){
        Node* temp = tail;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
};
int main(){
    MyLinkedList Leetcode;
    Leetcode.addAtHead(10);
    Leetcode.addAtHead(20);
    Leetcode.displayAthead();
    Leetcode.addAtTail(40);
    Leetcode.addAtTail(30);
    Leetcode.displayAthead();
    Leetcode.addAtIndex(3,30);
    Leetcode.addAtIndex(3,30);
    Leetcode.addAtIndex(5,30);
    Leetcode.displayAthead();
    Leetcode.deleteAtHead();
    Leetcode.displayAthead();
    Leetcode.deleteAtTail();
    Leetcode.displayAthead();
    Leetcode.deleteAtIndex(3);
    Leetcode.displayAthead();
    Leetcode.displayAttail();
}