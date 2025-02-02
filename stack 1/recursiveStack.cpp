#include<iostream>
#include<stack>
using namespace std;
void displayrecv(stack<int>& st){   // reverse order 
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayrecv(st);
    st.push(x);
    cout<<st.top()<<" ";
}
void displayrec(stack<int>& st){   // normal order 
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    displayrec(st);
    st.push(x);
}
void display(stack<int>& st){   // without recursion 
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    displayrec(st);
    cout<<endl;
    displayrecv(st);
}