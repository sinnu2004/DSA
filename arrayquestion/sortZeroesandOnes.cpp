#include<iostream>
#include<vector>
using namespace std;
/*void sort1(vector<int>& a){
    int n = a.size();
    int noz = 0;
    int noo = 0;
    for(int i=0;i<n;i++){
        if(a[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) a[i] = 0;
        else a[i] = 1;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}*/
void sort1(vector<int>& v){
    int i=0;
    int j=1;
    for(int i=0,j=1;i<j;i++,j--){
        if(V[i]==0) i++;
        
    }
}
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sort1(v);
    display(v);
}
