#include<iostream>
using namespace std;
int main(){
    int n = 499979;  // 4
    int count = 0;
    bool flag = false;
    for(int i=2;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
    }
    cout<<count<<" "<<endl;
    cout<<n-count-2<<endl;
} // 2 3 5 7 prime = n-count - 2;