#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    int arr[n][n] ;
    int count = 1;
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    int tne = n*n;
    while(count<=tne){
        for(int j=minc;j<=maxc ;j++){
            arr[minr][j] = count;
            count++;
        }
        minr++;
       
        // moving down
        for(int i=minr;i<=maxr ;i++){
            arr[i][maxc] = count;
            count++;
        }
        maxc--;
       
        // moving right to left
        for(int j=maxc;j>=minc ;j--){
            arr[maxr][j] = count;
            count++;
        }
        maxr--;
       
        // moving up
        for(int i=maxr;i>=minr ;i--){
            arr[i][minc] = count;
            count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    /*int minr = 0;
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
    }*/
}
