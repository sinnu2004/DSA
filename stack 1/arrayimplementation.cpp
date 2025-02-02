#include<iostream>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx = -1;
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"stack is full ";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1) {
            cout<<"stack is empty ";
            return;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        int n = sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
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
    st.push(50);
    st.display();
    st.pop();
    st.pop();
    st.display();
    cout<<st.top()<<endl;
    st.display();
    cout<<st.size()<<endl;
}