#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        if(i==0) cout<<"enter any "<<n<<" values :";
        cin>>arr[i];
    }
    cout<<endl;
    int x;
    cout<<"enter the element you want to search :";
    cin>>x;
    bool flag = false;
    for (int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"element is present";
    else cout<<"element is absent";
    cout<<endl;
}