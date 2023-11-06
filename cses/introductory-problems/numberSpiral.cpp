#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int row,col;
        cin>>row>>col;
        if(row>col){
            if((row&1)==1){
                cout<<((row-1)*(row-1) + col)<<endl;
            }else{
                cout<<((row*row)+1-col)<<endl; // (row-1)*(row-1) + row + (row-col)
            }
        }else{
            if((col&1)==1){
                cout<<((col*col)+1-row)<<endl;
            }else{
                cout<<((col-1)*(col-1) + row)<<endl; // (col-1)*(col-1) + col + (col-row)
            }
        }
    }
    return 0;
}