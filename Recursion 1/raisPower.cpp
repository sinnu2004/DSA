#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a :";
    cin>>a;
    cout<<"b :";
    cin>>b;
    int power = 1;
    for(int i=0;i<b;i++){
        power = power*a;
    }
    cout<<power<<endl;
}