#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int>& q){
    stack<int> st;
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverseQueue(q);
    display(q);
    reverseQueue(q);
    display(q);
}