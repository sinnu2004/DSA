#include<iostream>
#include<vector>
using namespace std;

// checking last index of occurance of any given number using vector 
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(3);
    v.push_back(13);
    v.push_back(9);
    v.push_back(13);
    int x = 9;
    int idx = -1;
    // output of vector
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // forward loop 
    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx = i;
    }
    cout<<endl;
    cout<<"index is :"<<idx;
    cout<<endl;

    // reverse loop 
    for(int i=v.size()-1;i>0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
       
    }
    cout<<endl;
    cout<<"index is :"<<idx;
    cout<<endl;

// by taking input from user 

    vector<int> a;
    int n;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int num1;  // num1 is the number you want to find index
    cout<<"num1 :";
    cin>>num1;
    int idx2 = -1; // idx is the index 
    for(int i=n-1;i>0;i--){
        if(a[i]==num1){
            idx2 = i;
            break;
        }
    }
    cout<<idx2;
}
