#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[] = {4,1,2,5,4,3,4,8,2,7};  // 5 2 5 8 8 4 8 -1 7 -1
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int> st;  // pop ans push 
    vector<int> ans(n);
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } // 7 2 7 -1 6 -1 3 -1
      // 7 2 7 -1 6 -1 3 -1
      // TC O(n) && SC O(n);
}