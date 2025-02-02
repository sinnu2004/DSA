#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1,int m,vector<int>& nums2,int n){
    int i=0;
    int j =0;
    while(i<nums1.size()){
        if(nums1[i]==0){
            nums1[i] = nums2[j];
            i++;
            j++;
        }
        else i++;
    }
    sort(nums1.begin(),nums1.end());
}
int main(){
    int m,n;
    cout<<"enter the size of array nums1 :";
    cin>>m;
    cout<<"enter the size of array nums2 :";
    cin>>n;
    int a[m+n];
    cout<<"enter the elements of array nums1 :";
    for(int i=0;i<m+n;i++){
        cin>>a[i];
    }
    int b[n];
    cout<<"enter the elements of array nums2 :";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int> nums1(a,a+m+n);
    vector<int> nums2(b,b+n);
    merge(nums1,m,nums2,n);
    cout<<endl;
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
}