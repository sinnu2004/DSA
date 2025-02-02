#include<iostream>
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
        else{
            Node* temp = head;
            for(int i=0;i<index;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0) addAtHead(val);
        else if(index==size) addAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* t = head;
            for(int i=1;i<=index-1;i++){
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
            size++;
        }
    }
    
    void deleteAtHead(){
        if(size==0) return;
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        Node* temp = head;
        if(size==0) return;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
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
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main(){
    MyLinkedList Leetcode;
    Leetcode.addAtHead(1);
    cout<<"NULL ";
    Leetcode.addAtTail(3);
    cout<<"NULL ";
    Leetcode.addAtIndex(1,2);
    cout<<"NULL ";
    cout<<Leetcode.get(1)<<" ";
    Leetcode.deleteAtIndex(1);
    cout<<"NULL ";
    cout<<Leetcode.get(1)<<" ";
    cout<<"NULL ";
    cout<<endl;
    Leetcode.display();
}