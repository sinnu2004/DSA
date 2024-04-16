#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,4,5},{2,3,5},{2,5,7}};
    for(int i=0;i<=2;i++){
        cout<<i<<" ";
        for(int j=0;j<=2;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}