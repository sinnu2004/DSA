#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x = 2;
    int n = -2;
    double ans = 1;
    cout<<n<<endl;
    int s = abs(n);
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        cout<<"the n :"<<n<<endl;
        ans = ans*x;
    }
    cout<<ans<<endl;
    cout<<1/ans<<endl;
}