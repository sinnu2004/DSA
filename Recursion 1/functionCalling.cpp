#include<iostream>
using namespace std;
void fun(int x){
    if(x==0) return;
    cout<<"good morning"<<endl;
    fun(x-1);
}
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    fun(n);
}