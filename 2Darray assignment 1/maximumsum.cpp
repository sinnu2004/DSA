#include<iostream> 
using namespace std;
int main(){
    int n = 4;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxsum = 0;
    int row;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(maxsum<sum){
            maxsum = sum;
            row = i;
        }
    }
    cout<<"the max sum is :"<<maxsum<<endl;
    cout<<"the row which has max sum is "<<row<<endl;
}