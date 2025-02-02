#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4][4] = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int n = 4;
    int m = 4;
    int row = -1;
    int firstIndx = -1;
    int maxOnes = 0;
    for(int i=0;i<n;i++){
        int lo = 0;
        int hi = n-1;
        int countOnes = 0;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid]==1){
                if(mid==0){
                    firstIndx = mid;
                    break;
                }
                else if(arr[i][mid-1]!=1){
                    firstIndx = mid;
                    break;
                }
                else hi = mid - 1;
            }
            else if(arr[i][mid]<1) lo = mid + 1;
            else hi = mid - 1;
        }
        if(firstIndx!=-1) countOnes = n - firstIndx;
        if(maxOnes<countOnes){
            maxOnes = countOnes;
            row = i;
        }

    }
    cout<<row<<" "<<maxOnes;
}