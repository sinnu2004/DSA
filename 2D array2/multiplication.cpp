#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row of 1st matrix :";
    cin>>m;
    int n;
    cout<<"enter the column of 1st matrix :";
    cin>>n;
    int p;
    cout<<"enter the row of 2nd matrix :";
    cin>>p;
    int q;
    cout<<"enter the column of 2nd matrix :";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"enter the elements of 1st matrix ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"enter the elements of 2nd matrix";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int r=0;r<p;r++){
                    res[i][j]+=a[i][r]*b[r][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"matrix can not be multiplied ";

}