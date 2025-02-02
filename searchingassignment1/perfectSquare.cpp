<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid==n){
            flag = true;
            break;
        }
        else if(mid*mid>n) hi = mid-1;
        else if(mid*mid<n) lo = mid + 1;
    }
    if(flag==true) cout<<"yes";
    else cout<<"no"; 
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid==n){
            flag = true;
            break;
        }
        else if(mid*mid>n) hi = mid-1;
        else if(mid*mid<n) lo = mid + 1;
    }
    if(flag==true) cout<<"yes";
    else cout<<"no"; 
>>>>>>> 6a5514e7fd6b8de5dd1db0ee4be09dda05150be5
}