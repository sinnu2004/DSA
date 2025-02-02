#include<iostream>
using namespace std;
int helper(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int vertical = helper(n-1);
    int horizontal = 1 + helper(n-1);
    return max(horizontal,vertical);
}
int main(){
    int n = 3;
    cout<<helper(n);
}