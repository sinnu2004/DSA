#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        if(i==0) cout<<"enter any "<<n<<" values :";
        cin>>arr[i];
    }
    int max = arr[0];
    for (int i=0;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"the maximum value of array is :"<<max;
    cout<<endl;
    int max2 = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max2<arr[i] && arr[i]!=max) max2 = arr[i];
    }
    cout<<"the second maximum value of array is :"<<max2;
    cout<<endl;
    int min = INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"the minimum value of array is :"<<min;
}