#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1};
    int n = 1;
    vector<int> range;
    int lo = 0;
    int hi = n-1;
    int x = 1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                range.push_back(mid);
                break;
            }
            else hi = mid - 1;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    lo = 0;
    hi = n - 1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                flag = true;
                range.push_back(mid);
                break;
            }
            else lo = mid + 1;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    for(int i=0;i<range.size();i++){
        cout<<range[i]<<" ";
    }
    if(flag==false) cout<<-1;
}