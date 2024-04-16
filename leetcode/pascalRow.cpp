#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rowIndex;
    cout<<"rowIndex";
    cin>>rowIndex;
    vector<int> getRow(int rowIndex);
    vector<int> v;
    long long fact = 1;
    for(int i=0;i<=rowIndex;i++){
            v.push_back(fact);
            fact = fact * (rowIndex - i)/(i+1);
        }
    for(int i=0;i<=rowIndex;i++){
        cout<<v[i]<<" ";
    }
    }
