#include<iostream>
using namespace std;
int main(){
    // correct declaration

    int arr[3][4]={{1,3,5,2},{2,2,5,5},{1,2,5,5}};
    cout<<arr[0][0]<<endl;
    cout<<arr[0][2]<<endl;
    cout<<arr[0][3]<<endl;
     
    // correct declaration 

    int brr[][4]={1,3,5,5,2,3,6,3};
    cout<<brr[][4];

    // incorrect declaration 
    int crr[8][]={1,5,6,2,6,26,3,6};
    cout<<crr[0][0];

    // incorrect declaration
    int drr[][]={1,2,5,3,6,2,6,2,6};
    cout<<drr[][];
}