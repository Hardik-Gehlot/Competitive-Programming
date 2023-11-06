#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<=(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
int main(){
    int n;
    get n;
    long long int sum=0,mx= -inf;
    rep(i,1,n){
        long long int x;
        get x;
        sum+=x;
        mx=max(sum,mx);
        if(sum<0) sum=0;
    }
    put mx;
    return 0;
}