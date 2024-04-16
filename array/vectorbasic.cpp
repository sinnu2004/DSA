#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // syntax of vector  / we need not mentioned size in vector
    v.push_back(9);
    v.push_back(0);
    v.push_back(2);
    v.push_back(8);
    v.push_back(5);
// size of vector 
    cout<<v.size()<<"the size of vector"<<endl;
    cout<<v.capacity()<<"the capacity of vector"<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
}