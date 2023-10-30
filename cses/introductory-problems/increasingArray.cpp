#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int ans = 0;
    int prev,curr;
    cin>>prev;
    for(int i=1; i<n; ++i){
        cin>>curr;
        if(curr>prev) prev= curr;
        else ans += (prev-curr);
    }
    cout<<ans;
    return 0;
}