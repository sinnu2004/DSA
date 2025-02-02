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
class Stack{
    public:
    int size;
    Node* head ;
    Node* tail;
    Stack(){
        head = tail = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head==NULL) {
            cout<<"stack is empty :";
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        return head->val;
    }
    int llsize(){
        return size;
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
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    st.pop();
    st.pop();
    st.display();
    cout<<st.top()<<endl;
    cout<<st.llsize()<<endl;
    st.display();
}