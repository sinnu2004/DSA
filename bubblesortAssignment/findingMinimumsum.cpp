#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end());
    int x1 = 0;
    for(int i=0;i<n;i++){
        x1 = x1*10 + arr[i];
    }
    cout<<"the first minimum element is :"<<x1<<endl;
    int x2 = x1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr.end()-i,arr.end());
        }
    }
    for(int i=0;i<n;i++){
        x2 = x2*10 + arr[i];
    }
    cout<<"the second minimum element is :"<<x2<<endl;
    int sum = x1 + x2;
    cout<<sum;

    
}