#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a-1); i>=(n); --i)
signed main(){
    int n;
    get n;
    ll sum=0;
    int maxi = -inf;
    rep(i,0,n){
        int take;
        get take;
        sum+=take;
        maxi = max(maxi,take);
    }
    ll sum2 = sum-maxi;
    if(sum2>maxi) put sum;
    else put maxi*2;
    return 0;
}