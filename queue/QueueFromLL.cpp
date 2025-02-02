#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next = NULL;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void pop(){
        if(size==0) {
            cout<<"queue is full";
            return;
        }
        head = head->next;
        size--;
    }
    int front(){
        if(size==0) {
            cout<<"queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0) {
            cout<<"queue is empty";
            return -1;
        }
        return tail->val;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.size<<endl;
    cout<<q.back()<<endl;
}