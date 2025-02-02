#include<iostream>
#include<stack>
using namespace std;
void pushAtbottom(stack<int>& st,int ele){
    if(st.size()==0) {
        st.push(ele);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtbottom(st,ele);
    st.push(x);
}
void display(stack<int>& st){
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
void reverse(stack<int>& st){
    if(st.size()==1) return; 
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    pushAtbottom(st,-10);
    display(st);
    reverse(st);
    display(st);
}