#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int x = 0;
    for(int i=1; i<n; ++i){
        int y;
        cin>>y;
        x = x-y+i;
    }
    cout<<(x+n);
    return 0;
}