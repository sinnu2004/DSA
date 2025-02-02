#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        arr[i] = i;
    }
    //reverse(v.begin(),v.end());
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==arr[j]) count++;
        }
    }
    for(int i = arr[0];i<n;i++){
        arr[i] = i;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<endl;
    cout<<count<<endl;
}