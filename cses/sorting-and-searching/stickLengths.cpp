#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
int main(){
    int n;
    get n;
    vector<int> v(n);
    rep(i,0,n){
        get v[i];
    }
    sort(v.begin(),v.end());
    long long int req = (v[n/2]);
    long long int ans =0;
    rep(i,0,n-1){
        ans += abs(v[i]-req);
    }
    put ans;
    return 0;
}