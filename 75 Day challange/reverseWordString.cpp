#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "the sky is blue";
    string ans = "";
    int i = 0;
    for(int j=s.length()-1;j>=0;j--){
        ans[j] = s[i];
        i++;
    }
    //reverse(ans.begin(),ans.end());
    for(int i=0;i<s.length();i++){
        cout<<ans[i];
    }
}