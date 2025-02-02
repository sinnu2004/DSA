#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    while(b!=0){
        b = a%b;
        a = b;
    }
    cout<<a<<endl;
}