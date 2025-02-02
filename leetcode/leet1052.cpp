#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int a[] = {3};
    int n = sizeof(a)/sizeof(a[0]);
    int b[] = {1};
    int m = sizeof(b)/sizeof(b[0]);
    int minutes = 1;
    // output 16 
    vector<int> customers(a,a+n);
    vector<int> grumpy(b,b+m);
    for(int i=0;i<n;i++){
        cout<<customers[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        cout<<grumpy[j]<<" ";
    }
    cout<<endl;
    int minsum = INT_MAX;
    int sum = 0;
    for(int i=0;i<minutes;i++){
        if(grumpy[i]==0) {
            sum += customers[i];
        }
    }
    minsum = sum;
    int i=1;
    int j = minutes;
    int startIdx = 0;
    int endIdx = minutes-1;
    int count = 0;
    while(j<n){
        int currentsum = sum + customers[j] - customers[i-1];
        if(currentsum<minsum){
            minsum = currentsum;
            startIdx = i;
            endIdx = j;
        }
        i++;
        j++;
        count++;
    }
    if(count==0) cout<<sum<<endl;
    cout<<startIdx<<" "<<endIdx<<endl;
    for(int k=startIdx;k<=endIdx;k++){
        customers[k] = 0;
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        cout<<customers[i]<<" ";
    }
    cout<<endl;
    sum = 0;
    for(int i=0;i<n;i++){
        sum += customers[i];
    }
    cout<<sum<<endl;
}