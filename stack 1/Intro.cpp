#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<st.size()<<endl;
}