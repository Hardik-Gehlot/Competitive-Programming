#include<bits/stdc++.h>
using namespace std;
void solve(int n, int src, int dest, int aux){
    if(n>0){
        solve(n-1, src, aux, dest);
        cout<<src<<" "<<dest<<endl;
        solve(n-1, aux, dest, src);
    }
}
int main(){
    int n;
    cin >> n;
    cout<< (1<<n)-1<<"\n";
    solve(n,1,3,2);
    return 0;
}