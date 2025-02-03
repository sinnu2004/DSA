#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<string>
using namespace std;
class Node{
    public: 
        Node* next;
        int val;
        Node(int val){
            this->next = NULL;
            this->val = val; 
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
        void add(int val){
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
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};  
int maint(){
    // linked ll;
    // ll.add(10);
    // ll.add(11);
    // ll.add(12);
    // ll.display()
    cout<<"hello world";
}