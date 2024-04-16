#include<iostream>
using namespace std;
// syntax and declaration of array

int main(){
    int arr[7] = {2,4,7,3,8,4,9};
    // cout<<arr[4];
    for (int i = 0;i<=6;i++){
        cout<<arr[i]<<" ";
    }


// marks of student using array

    int n;
    cout<<"enter the number:";
    cin>>n;
    int marks[n];
    cout<<"enter the marks:";
    int size = sizeof(marks)/sizeof(marks[0]);
    cout<<size;
    for (int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    for (int i=0;i<=n-1;i++){
        if (marks[i]<35) cout<<i<<" ";
    }
}