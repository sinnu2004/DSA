#include<iostream>
#include<string>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector< vector<string> > str;
    str = { {"saurabh", "prajapat", "kumar"}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<i<<" "<<j<<" "<<str[i][j]<<" ";
        }
    }
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
    cout<<endl;
    reverse(s.begin(),s.end());
    cout<<s;
}