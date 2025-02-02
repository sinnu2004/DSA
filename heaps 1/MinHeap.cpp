#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue< int, vector<int>, greater<int> > pq;
    pq.push(1);
    pq.push(-1);
    pq.push(4);
    pq.push(2);
    pq.push(7);
    cout<<pq.top()<<endl;

}