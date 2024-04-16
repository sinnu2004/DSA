#include<iostream>
#include<vector>
using namespace std;
void ncr(int n, int r){
    
}
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector< vector<int> > v(n);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            int ncr = combination(n,r);
        }
    }

}