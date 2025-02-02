#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = 5;
   // for each loop
    /*for(int ele : arr){
        cout<<ele<<" ";
    }*/
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}