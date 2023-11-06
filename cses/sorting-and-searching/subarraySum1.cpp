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
void test(){
    int n,x;
    in(n,x);
    takev(v,n);
    int i=0,ans=0;
    ll sum=0;
    rep(j,0,n){
        sum+=v[j];
        while(sum>x and i<=j){
            sum-=v[i];
            i++;
        }
        if(sum==x) ans++;
    }
    put ans;
}
signed main(){
    int t=1;
    // in t;
    while(t--){
        test();
    }
}