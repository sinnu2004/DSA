#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rowIndex;
    cout<<"rowIndex :";
    cin>>rowIndex;
    vector< vector<int> > getRow;
    for(int i=1;i<=rowIndex;i++){
        vector<int> a(i);
        getRow.push_back(a);
    }
    for(int i=0;i<rowIndex;i++){
        for(int j=0;j<=i;j++){
            if(j == 0 || j == i){
                getRow[i][j] = 1;
            }
            else{
                int prev = getRow[i-1][j-1];
                int curr = getRow[i-1][j];
                int sum = prev + curr;
                getRow[i][j] = sum;
            }
        }
    }
    for(int i=0;i<rowIndex;i++){
        for(int j=0;j<=i;j++){
            cout<<getRow[i][j]<<" ";
        }
        cout<<endl;
    }
}