#include<iostream>
#include<queue>
using namespace std;
void removeEven(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){  // 10 20 30 40 50 
       if(i%2==0) q.pop();
       else {
            int x = q.front();
            q.push(x);
            q.pop();
       }
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
    q.push(60);
    display(q);
    removeEven(q);
    display(q);
}