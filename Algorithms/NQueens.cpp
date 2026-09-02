#include <iostream>
#include <vector>
using namespace std;

int count = 0;

bool is_safe(int row, int col, vector<vector<int>>& grid){
    //column wise
    for (int cr=0; cr<row; cr++){
        if(grid[cr][col] == 1) return false;
    }

    //left diagonal
    int cr = row-1;
    int cc = col-1;
    while(cr >= 0 && cc >= 0){
        if (grid[cr][cc] == 1) return false;
        cr--;
        cc--;
    }

    //right diagonal
    cr = row-1;
    cc = col+1;
    while(cr>=0 && cc<grid.size()){
        if (grid[cr][cc] == 1) return false;
        cr--;
        cc++;
    }
    return true;
}

void NQueens(int row, vector<vector<int>>& grid){
    //Base condn
    if (row >= grid.size()){
        for(int i=0; i<grid.size(); i++){
            for (int j=0; j<grid.size(); j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        count++;
        return;
    }

    for (int col=0; col<grid.size(); col++){
        if (is_safe(row, col, grid)){
            grid[row][col] = 1;
            NQueens(row+1, grid);
            //Backtrack
            grid[row][col] = 0;
        }
    }
}

int main(){
    int n;
    cout<<"Enter Value of n: "<<endl;
    cin>>n;

    vector<vector<int>> grid(n, vector<int>(n, 0));
    NQueens(0, grid);
    cout<<count<<endl;
}