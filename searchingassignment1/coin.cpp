#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    int lo = 1;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int x = lo + (hi-lo)/2;
        int m = x*(x+1)/2;
        if(m==n){
            flag = true;
            cout<<x;
            break;
        }
        else if(m<n) lo = x + 1;
        else if(m>n) hi = x - 1;
    }
    if(flag==false) cout<<hi;
}