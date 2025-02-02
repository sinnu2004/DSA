#include<iostream>
#include<vector>
using namespace std;
class Node{  // user defined data type
    public:
        int val;
        Node* next;
        Node(int val){   //  constructor of Node
            this->val = val;
            this->next = NULL;
        }
};
class LinkedList{  // user defined data structure  new class create 
    public:  // data member 
    Node* head;
    Node* tail;  // NULL ka koi val or address nhi hota 
    int size;
    LinkedList(){   // making constructor of LinkedList 
        head = tail = NULL;
        size = 0;
    }
    // inserting the value at the end of linked list 
    void insertAtTail(int val){
        Node* temp = new Node(val);   // create new temparari Node
        if(size==0) head = tail = temp;
        else {  // new temp Node take add
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    int count(int Count){
        Node* temp = head;
        while(temp!=NULL){
            Count++;
            temp = temp->next;
        }
        return Count;
    }
    void deleteAtIdx(int Idx){
        //if(size==0) cout<<"empty list ";
        Node* temp = head;
        for(int i=1;i<Idx;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
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
int main(){  
    LinkedList ll;   // 1,3,4,7,1,2,6
    ll.insertAtTail(1);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(7);
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(6);
    ll.display();
    int n = ll.count(0);
    ll.deleteAtIdx(n/2);
    ll.display();
}
