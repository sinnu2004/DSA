#include<iostream> 
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"row:";
    cin>>m;
    cout<<"col";
    cin>>n;
    vector<int> grid1;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid1[i][j];
        }
    }

    vector<int> grid2;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid1[i][j];
        }
    }

    vector<int> grid3;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid1[i][j];
        }
    }

    vector< vector<int> > grid;
    grid.push_back(grid1);
    grid.push_back(grid2);
    grid.push_back(grid3);

// printing initial matrix

    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    int row = grid.size();
    int col = grid[0].size();
    cout<<grid.size();
    cout<<endl;
    cout<<grid[0].size();
    cout<<endl;
    // flipping rows 
    for(int i=0;i<row;i++){
        if(grid[i][0]==0){
            for(int j=0;j<col;j++){
                if(grid[i][j]==0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    // flipping colums
    for(int j=col-1;j>=0;j--){
        int noz = 0;
        int noo = 0;
        for(int i=0;i<row;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<row;i++){
            if(grid[i][j]==0) grid[i][j] = 1;
            else grid[i][j] = 0;
        }
    }
}
// printing final matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
}
 // finding sum of matrix
    int sum = 0;
    for(int i=0;i<row;i++){
        int num = 1;
        for(int j=col-1;j>=0;j--){
            sum+=grid[i][j]*num;
            num*=2;
        }
    }
    cout<<endl;
    cout<<sum;
}