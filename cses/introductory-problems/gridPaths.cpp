#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';

bool grid[9][9]; // to add border at all sides
string s;
int solve(int ind, int row, int col){
    if(grid[row][col]) return 0;
    //special optimization without this we get TLE
    if((grid[row][col-1] and grid[row][col+1]) and (!grid[row-1][col] and !grid[row+1][col])) return 0;
    if((grid[row-1][col] and grid[row+1][col]) and (!grid[row][col-1] and !grid[row][col+1])) return 0;
    if(row==7 and col==1){
        if(ind==48) return 1;
        else return 0;
    }
    if(ind==48) return 0;
    grid[row][col]=true;
    int val=0;
    if(s[ind]=='?'){
        val+= solve(ind+1, row+1, col); //D
        val+= solve(ind+1, row-1, col); //U
        val+= solve(ind+1, row, col+1); //R
        val+= solve(ind+1, row, col-1); //L
    }else{
        if(s[ind]=='D') val+= solve(ind+1, row+1, col); //D
        else if(s[ind]=='U')val+= solve(ind+1, row-1, col); //U
        else if(s[ind]=='R')val+= solve(ind+1, row, col+1); //R
        else val+= solve(ind+1, row, col-1); //L
    }
    grid[row][col] = false;
    return val;
}
int main(){
    cin>>s;
    for(int i=0; i<9; ++i){
        grid[0][i] = true;
        grid[8][i] = true;
        grid[i][0] = true;
        grid[i][8] = true;
    }
    cout<<solve(0,1,1);
    return 0;
}