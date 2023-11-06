#include<bits/stdc++.h>
using namespace std;
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
#define int long long int
void test(){
    int n,l,r;
    in(n,l,r);
    takev(v,n);
    vector<ll> prefix(n+1,0);
    rep(i,0,n){
        prefix[i+1]=prefix[i]+v[i];
    }
    multiset<ll> s;
    rep(i,l,r+1){
        s.insert(prefix[i]);
    }
    ll maxi=-1e18+10;
    rep(i,1,n-l+2){
        auto it = s.rbegin();
        ll sum = (*it)-prefix[i-1];
        maxi = max(maxi,sum);
        s.erase(s.find(prefix[i+l-1]));
        if(i+r<=n)s.insert(prefix[i+r]);
    }
    put maxi;
}
signed main(){
    int t=1;
    // in t;
    while(t--){
        test();
    }
}