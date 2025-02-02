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
    // inserting the value at the begining of linked list 
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size>0) {
            temp->next = head;
            head = temp;
        }
        else head = tail = temp;
        size++;
    }
    void insertAtIdx(int Idx,int val){
        if(Idx==0) insertAtHead(val);
        else if(Idx==size) insertAtTail(val); 
        else if(Idx<0 || Idx>size) {
            cout<<"invalid ";
        }
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=Idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getElement(int Idx){
        if(Idx<0 || Idx>=size) return -1;
        if(Idx==0) return head->val;
        else if(Idx==size-1) return tail->val;
        else {
            Node* temp = head;
            for(int i=1;i<Idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"list is empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        Node* temp = head;
        if(size==0) {
            cout<<"list is empty";
            return;
        }
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int Idx){
        if(size==0) cout<<"empty list ";
        else if(Idx<0 || Idx>=size) cout<<"invalid index ";
        else if(Idx==0) deleteAtHead();
        else if(Idx==size-1) deleteAtTail();
        else {
            Node* temp = head;
            for(int i=1;i<Idx;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
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
int main(){  
    // ["MyLinkedList","addAtHead","deleteAtIndex","addAtHead","addAtHead"
    //,"addAtHead","addAtHead","addAtHead","addAtTail","get","deleteAtIndex","deleteAtIndex"]
    // [[],[2],[1],[2],[7],[3],[2],[5],[5],[5],[6],[4]]
    LinkedList ll;  // ( )
    //ll.insertAtTail(10);  // (10)
    //ll.display();
    //ll.insertAtTail(20); // (10->20->NULL)
    //ll.display();
    ll.insertAtHead(2); // (50->10->20->NULL)
    ll.deleteAtIdx(1);
    ll.insertAtHead(2);
    ll.insertAtHead(7);
    ll.insertAtHead(3);
    ll.insertAtHead(2);
    ll.insertAtHead(5);
    ll.insertAtHead(5);
    ll.insertAtTail(5);
    //ll.display();
    //ll.insertAtHead(25);
    //ll.display();
    //ll.display();
    ll.insertAtTail(3); // (10->20->NULL)
    ll.insertAtIdx(1,2);
    //ll.display();
    //ll.insertAtIdx(5,200);
    //ll.display();
    //cout<<ll.size<<endl;
    //cout<<endl;
    // giving values through loop 
    /*int m = 10;
    for(int i=0;i<m;i++){
        int n = i;
        ll.insertAtTail(n);
    }
    ll.display();*/
    cout<<"first display :";
    ll.display();
    // returning the element at any given index of the linked list 
    cout<<ll.getElement(1)<<endl;

    // delete a node at a head

    //ll.deleteAtHead();
    //ll.display();
    //cout<<ll.size<<endl;

    // delete a node at tail

    //ll.deleteAtTail();
    //ll.display();  

    // delete a node at any given Idx
    ll.deleteAtIdx(1);
    //ll.display();
    //cout<<ll.size<<endl;
    cout<<"second display :";
    ll.display();
    cout<<ll.getElement(1)<<endl;
}
