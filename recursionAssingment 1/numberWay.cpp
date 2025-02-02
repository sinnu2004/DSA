#include<iostream>
using namespace std;
int findway(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return findway(n-1) + findway(n-2) + findway(n-3);
}
int main(){
    cout<<findway(10)<<endl;
}