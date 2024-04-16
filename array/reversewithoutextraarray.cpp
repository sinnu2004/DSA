#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>& a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(0);
    v.push_back(6);
    display(v);

// using while loop

    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);

// using for loop

    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);

// reverse part of array 
    
    reversepart(0,3,v);
    display(v);

}
