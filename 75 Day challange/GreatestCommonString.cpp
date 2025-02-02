#include<iostream>
#include<string>
using namespace std;
int gcd(int len1,int len2){
    int ans = 0;
    int mn = len1;
    if(len1>len2) mn = len2;
    for(int i=1;i<mn+1;i++){
        if(len1%i==0 && len2%i==0){
            ans = i;
        }
    }
    return ans;
}
int main(){
    string str1 = "ABCDEF";
    string str2 = "ABC";
    int len1 = str1.size();
    int len2 = str2.size();
    int mn = gcd(len1,len2);
    cout<<mn<<" ";
    bool flag = true;
    string x;
    for(int i=0;i<mn;i++){
        if(str1[i]%str2[i]!=0) {
            flag = false;
            x = "";
            break;
        }
        else x+=str1[i];
    }
    if(flag==true) cout<<"x:"<<x<<" ";
}
// leetcode
int mn = str1.size();
        if(str1.size()>str2.size()) mn = str2.size();
        string x;
        if(str1+str2 != str2+str1) return x;
        for(int i=0;i<mn;i++){
            bool flag = true;
            x = x+str1[i];
            string s;
            while(s.size()!=mn){
                if(s.size()>=mn) break;
                s = s+x;
            }
            for(int j=0;j<mn;j++){
                if(s[j]%str1[j]==0 && s[j]%str2[j]==0){
                    flag = true;
                }
                else {
                    flag = false;
                    break;
                }
            }
            if(flag==true) return x;
        }
        x = "";
        return x;