#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
bool check(string grid[], int row,int col){
    if(grid[row][col]=='*') return false;
    for(int i=1; i<=row; ++i){
        if(grid[row-i][col]=='Q') return false;
        if((col-i)>= 0 and grid[row-i][col-i]=='Q') return false;
        if((col+i) < 8 and grid[row-i][col+i]=='Q') return false;
    }
    return true;
}
int solve(string grid[], int row){
    if(row==8) return 1;
    int val = 0;
    for(int i=0;i<8; ++i){
        if(check(grid,row,i)){
            grid[row][i] = 'Q';
            val += solve(grid,row+1);
            grid[row][i]='.';
        }
    }
    return val;
}
int main(){
    string grid[8];
    for(int i=0; i<8; ++i){
        get grid[i];
    }
    put solve(grid,0);
    return 0;
}