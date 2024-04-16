#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = n-1;
    bool flag = true;
    while(i<j){
        if(arr[i]!=arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<"palindrome";
    else cout<<"Not palindrome";
}