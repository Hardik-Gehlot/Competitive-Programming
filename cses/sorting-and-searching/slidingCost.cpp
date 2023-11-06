#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;	
typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> order_multiset;
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
    order_multiset s;
    rep(i,0,k) s.insert(v[i]);
    int idx = ((k+1)>>1)-1;
    ll mid = *s.find_by_order(idx);
    ll ans = 0;
    rep(i,0,k){
        ans+= abs(v[i]-mid);
    }
    out(ans);
    int i=0;
    rep(j,k,n){
        s.erase(s.find_by_order(s.order_of_key(v[i])));
        s.insert(v[j]);
        int new_mid = *s.find_by_order(idx);
        ans += (abs(v[j]-new_mid) - abs(v[i]-mid));
        if(k%2==0) ans -= (new_mid - mid);
        mid = new_mid;
        out(ans);
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