#include<iostream>
using namespace std;
void sum(int s,int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    sum(s+n,n-1);
}
int main(){
    sum(0,5);
}