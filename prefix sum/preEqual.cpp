#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n = 8;
    int presum = n*(n+1)/2;
    cout<<presum<<endl;
    int suf = 0;
    cout<<suf<<endl;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
        suf = suf + i;
        cout<<"the suf "<<suf<<" ";
        if(suf==presum) {
            cout<<"the ans :"<<i<<" ";
            break;
        }
        presum = presum - i;
        cout<<"the pre "<<presum<<" ";
    }
}