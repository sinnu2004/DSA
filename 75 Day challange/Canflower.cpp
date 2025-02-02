#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,0,0,0,1,0,0};
    int m = sizeof(arr)/sizeof(arr[0]);
    vector<int> flowerbed(arr,arr+m);
    int n = 2;
    for(int i=0;i<m;i++){
        cout<<flowerbed[i]<<" ";
    }
    cout<<endl;
        int i = 1;
        int count = 0;
        if(n==0) return true;
        if(m==1 && flowerbed[0]==0 && n==1){
            cout<<true;
        }
        if(m>1 && flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0] = 1;
            count++;
        }
        if(flowerbed[m-1]==0 && flowerbed[m-2]==0){
            flowerbed[m-1] = 1;
            count++;
        }
        while(i<flowerbed.size()-1){
            if(count<n && flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i] = 1;
                count++;
            }
            i++;
        }
        if(count==n) {
            cout<<true;
        }
        else {
            cout<<true;
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            cout<<flowerbed[i]<<" ";
        }
}