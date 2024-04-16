#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0;i<n;i++){
        if(max1<arr[i]) max1 = arr[i];
    }
    for(int i=0;i<n;i++){
        if(max2<arr[i] && arr[i]!=max1) max2 = arr[i];
    }
    for(int i=0;i<n;i++){
        if(max3<arr[i] && (arr[i]!=max1 && arr[i]!=max2)) max3 = arr[i];
    }

    cout<<"max1 :"<<max1<<endl;
    cout<<"max2 :"<<max2<<endl;
    cout<<"max3 :"<<max3<<endl;
    
}