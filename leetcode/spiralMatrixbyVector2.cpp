#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector< vector<int> > generate(n,vector<int> (n));
    int count = 1;
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    int tne = n*n;
    while (count<=tne){
        for(int j=minc;j<=maxc;j++){
            generate[minr][j] = count;
            count++;
        }
        minr++;
       
        // moving down
        for(int i=minr;i<=maxr ;i++){
            generate[i][maxc] = count;
            count++;
        }
        maxc--;
       
        // moving right to left
        for(int j=maxc;j>=minc ;j--){
            generate[maxr][j] = count;
            count++;
        }
        maxr--;
       
        // moving up
        for(int i=maxr;i>=minr ;i--){
            generate[i][minc] = count;
            count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<generate[i][j]<<" ";
        }
        cout<<endl;
    }
   
}