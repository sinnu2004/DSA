#include<iostream>
using namespace std;
int sum(int a,int b){
    if(b<a) return 0;
    return b+sum(a,b-2);
}
int main(){
    int a;
    cout<<"enter the first term :";
    cin>>a;
    int b;
    cout<<"enter the second term :";
    cin>>b;
    cout<<sum(a,b);
}

// 1 2 3 4 5 6 7 8 9 = 25