#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    bool flag = true;
    for(int i=2;i*i<=n;i++){
        cout<<i<<endl;
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<n<<" is a prime number";
    else cout<<n<<" is not a prime number";
}