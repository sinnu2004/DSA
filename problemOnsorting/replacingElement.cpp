#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    sort(v.end(),v.begin());
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<v[i]){
            max = v[i];
        }
    }
    cout<<max<<endl;
    for(int i=0;i<n;i++){
        if(max>v[i]){
            v[i] = v[i] - max;
            v[i] = -v[i];
        }
        else v[i] = v[i] = max;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}