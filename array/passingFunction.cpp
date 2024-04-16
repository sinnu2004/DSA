#include<iostream>
#include<climits>
using namespace std;

// passing array to function // array is pass by reference 

void display(int arr[], int size){
    for (int i=0;i<=size - 1;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    return;
}
void change(int b[], int size){
    b[0] = 100;
    return;
}
int main(){
    int arr[] = {1, 2, 5, 75, 74};
    int size = sizeof(arr)/sizeof(arr[0]);  // to find size of array
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
