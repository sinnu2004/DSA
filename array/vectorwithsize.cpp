#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5); 
    vector<int> a(10,100); // 10 is the size and 100 is the valus of each element  
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<endl;

    cout<<"the size is :"<<v.size()<<endl;
    cout<<"the capacity is :"<<v.capacity()<<endl;

}