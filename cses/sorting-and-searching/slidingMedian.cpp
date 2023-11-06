#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;	
typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> orderSet;
typedef long long ll;
typedef long long int lli;
template<typename... T>
void in(T&... args){((cin>>args), ...);}
template<typename... T>
void out(T&... args){((cout<<args<<" "), ...);}
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size();
#define pi pair<int,int>
#define pii pair<int,pair<int,int>>
#define vi vector<int>
#define vii vector<pi>
#define F first
#define S second
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define repd(i,a,b) for(int i=(a); i>=(b); --i)
#define repi(i,a,b,c) for(int i=(a); i<(b); i+=(c))
#define takev(v,n) vi v(n); rep(i,0,n) in(v[i]); 
#define printv(v,n) rep(i,0,n) out(v[i]); 
void test(){
    int n,k;
    in(n,k);
    takev(v,n);
    orderSet s;
    rep(i,0,k-1){
        s.insert(v[i]);
    }
    int idx=(k+1)/2;
    int i=0;
    rep(j,k-1,n){
        s.insert(v[j]);
        auto it = s.find_by_order(idx-1);
        put *(it)<<" ";
        auto deit = s.upper_bound(v[i]);
        s.erase(deit);
        i++;
    }
}
signed main(){
    int t=1;
    // in t;
    while(t--){
        test();
    }
}