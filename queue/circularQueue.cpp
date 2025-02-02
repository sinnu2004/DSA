#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(val);
    }
    void push(int val){
        if(b==arr.size()) {
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s==0) {
            cout<<"queue is empty";
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0) return -1;
        return arr[f];
    }
    int back(){
        if(s==0) return -1;
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}