#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i, int j, vector<int>& reverse){
    while(i<=j){
        int temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> reverse(n);
    for(int i=0;i<n;i++){
        cin>>reverse[i];
    }
    for(int i=0;i<n;i++){
        cout<<reverse[i]<<" ";
    }
    cout<<endl;
    int k = 3;
    if(k>n) k = k%n;
    reversePart(0,n-k-1,reverse);
    reversePart(n-k,n-1,reverse);
    reversePart(0,n-1,reverse);
    for(int i=0;i<n;i++){
        cout<<reverse[i]<<" ";
    }
    cout<<endl;

}