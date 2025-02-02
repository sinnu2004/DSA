#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int main(){
    string s = "leet**cod*e";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    string ans;
    while(st.size()>0){
        if(st.top()!='*'){
            ans += st.top();
            st.pop();
        }
        else if(st.top()=='*'){
            st.pop();
            st.pop();
        }
    }
    cout<<ans<<endl;
}