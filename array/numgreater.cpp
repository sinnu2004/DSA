// finding the number of element greater than any number 

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        if(i==0) cout<<"enter the any "<<n<<" values of array";
        cin>>arr[i];
    }
    int x;
    cout<<"enter the number :";
    cin>>x;
    int count = 0;
    for (int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count<<endl;
}