#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string s = "aaaaaa";
    string t = "bbaaaa";
    bool flag = false;
    int n = s.length();
    int j = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        while(j<t.length()){
            if(s[i]==t[j]){
                flag = true;
                cout<<s[i]<<" ";
                count++;
                break;
            }
            cout<<i<<" ";
            //cout<<j<<" ";
            j++;
        }
    }
    if(count==n && flag==true) cout<<"yes";
    else cout<<"not";
    
}