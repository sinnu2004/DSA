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
class Ll{
    public:
        Node* head;
        Node* tail;
        int size;
    Ll(){
        head=tail=NULL;
        size = 0;
    }
    void Insert(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp =temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Ll Link;
    Link.Insert(10);
    Link.display();
    Link.Insert(20);
    Link.Insert(10);
    Link.Insert(20);
    Link.Insert(10);
    Link.Insert(20);
    Link.display();
    
}