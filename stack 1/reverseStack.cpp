#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.push();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> rt;
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>0){
        rt.push(st.top());
        gt.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<st.size()<<endl;
}