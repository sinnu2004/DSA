#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int minr = 0;
    int minc = 0;
    int maxr = 3;
    int maxc = 3;
    int count = 0;
    int tne = 4*4;
    
    while(minr<=maxr && minc<=maxc){
        // moving left to right 
        for(int j=minc;j<=maxc && count<tne;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
       
        // moving down
        for(int i=minr;i<=maxr && count<tne;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
       
        // moving right to left
        for(int j=maxc;j>=minc && count<tne;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
       
        // moving up
        for(int i=maxr;i>=minr && count<tne;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}