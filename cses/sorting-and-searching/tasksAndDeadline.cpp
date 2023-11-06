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
    int n;
    get n;
    vector<pair<int,int>> v(n);
    rep(i,0,n) get v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    ll time = 0;
    ll ans = 0;
    rep(i,0,n){
        time += v[i].first;
        ans += v[i].second-time;
    }
    put ans;
    return 0;
}