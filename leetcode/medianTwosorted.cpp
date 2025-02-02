#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the 1st lenght :";
    cin>>n;
    cout<<"enter the 2nd lenght :";
    cin>>m;
    vector<int> a(n);
    cout<<"enter the elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    vector<int> b(m);
    cout<<"enter the elements :";
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    cout<<endl;
    cout<<"the element of first sorted array :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"the element of second sorted array :";
    for(int j=0;j<m;j++){
        cout<<b[j]<<" ";
    }
    cout<<endl;
    vector<int> v(n+m);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) v[k++] = a[i++];
        else v[k++] = b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            v[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            v[k++] = a[i++];
        }
    }
    cout<<"the resultant array is :";
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
    int r = v.size();
    cout<<r<<endl;
    float median;
    float odd = r/2-1;
    float even = r/2;
    cout<<"the size :";
    cout<<odd<<endl;
    cout<<even<<endl;
    if(r%2!=0){
        median = v[odd];
    }
    else{
        median = v[r/2-1] + v[r/2];
        median = median/2;
    }
    cout<<"the median is :"<<median<<endl;
}