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
class linked{
    public: 
        Node* head;
        Node* tail;
        int size;
        linked(){
            head = tail = NULL;
            size = 0;
        }
    public: 
    void insert(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            temp = temp->next;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val;
            temp = temp->next;
        }
    }

};
int main(){
    linked ll;
    ll.insert(10);
    ll.display();

}