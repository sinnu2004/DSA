#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows =5;
    int col = 6;
    int maxc = col-1;
    int rstart = 1;
    int cstart = 4;   // [[1,4],[1,5],[2,5],[2,4],[2,3],[1,3],[0,3],[0,4],[0,5],[3,5],[3,4],[3,3],[3,2],[2,2],[1,2],[0,2],[4,5],[4,4],[4,3],[4,2],[4,1],[3,1],[2,1],[1,1],[0,1],[4,0],[3,0],[2,0],[1,0],[0,0]]

    int count = 1;
    int arr[rows][col];
    while(rows*col){
        // left to right 
        cstart++;
        for(int j=cstart;j<=cstart+1;j++){
            arr[rstart][j] = count;
            count++;
        }
        // down 
        rstart++;
        for(int i=rstart;i<=rstart;i++){
            int colup = cstart + 1;
            arr[i][colup] = count;
        }
        // right
        for(int j=maxc-1;j>=rstart-1;j--){
            int rodown = rstart - 1;
            arr[rodown][j] = count;
            count++;
        }
        // up
        for(int i=cstart-1;i>=rstart-1;i--){
            int coldown = cstart - 1;
            arr[i][cstart-1] = count;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;i<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}