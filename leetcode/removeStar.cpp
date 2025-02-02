#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    string s = "leet**cod*e";
    stack<char> st;
    st.push(s[0]);
    int i = 1;
    while(i<s.length()){
        if(s[i]=='*') st.pop();
        else {
            st.push(s[i]);
        }
        i++;
    }
    stack<char> temp;
    while(st.size()>0){
        char x = st.top();
        temp.push(x);
        st.pop();
    }
    string ans;
    while(temp.size()>0){
        ans += temp.top();
        temp.pop();
    }
    cout<<ans;
}