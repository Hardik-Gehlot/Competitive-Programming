#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
signed main(){
    int n,t;
    get n>>t;
    vector<int> v(n);
    rep(i,0,n) get v[i];
    ll low=0,high=1e18;
    ll ans=0;
    while(low<=high){
        ll mid = (low+high)>>1;
        ll numOfProducts=0;
        rep(i,0,n){
            numOfProducts += mid/v[i];
            if(numOfProducts>=t) break;
        }
        if(numOfProducts>=t){
            ans = mid;
            high = mid-1;
        }else low = mid+1;
    }
    put ans;
    return 0;
}