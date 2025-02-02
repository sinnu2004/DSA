#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<" pre "<<n;
    pip(n-1);
    cout<<" in "<<n;
    pip(n-1);
    cout<<" post "<<n;
}
int main(){
    pip(3);
}