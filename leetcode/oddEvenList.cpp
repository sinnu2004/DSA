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
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    Node* oddEvenList() {
        Node* odd = head;
        Node* even = head->next;
        Node* otemp = odd;
        Node* etemp = even;
        Node* l = even;
        while(otemp!=NULL || etemp!=NULL){
            //cout<<odd->val<<" ";
            if(otemp->next==NULL || etemp->next==NULL) break;
            odd->next = otemp->next->next;
            even->next = etemp->next->next;
            odd = odd->next;
            even = even->next;
            otemp = odd;
            etemp = even;
        }
        odd->next = l;
        Node* r = head;
        while(r!=NULL){
            cout<<r->val<<" ";
            r = r->next;
        }
        // while(etemp!=NULL){
        //     cout<<even->val<<" ";
        //     if(etemp->next==NULL) break;
        //     even->next = etemp->next->next;
        //     even = even->next;
        //     etemp = even;
        // }
    }
};
int main(){  
    LinkedList ll;   // 1,3,4,7,1,2,6
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.display();
    ll.oddEvenList();
}
