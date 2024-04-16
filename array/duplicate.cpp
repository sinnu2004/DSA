#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag = false;
    for (int i=0;i<=n-1;i++){
        for (int j=i+1;j<=n-1;j++){
            if (arr[i]==arr[j]){
                flag = true;
                cout<<"duplicate :"<<arr[i]<<endl;
                break;
            }
        }
    }
    if(flag==false) cout<<"no duplicate";
    return 0;
}