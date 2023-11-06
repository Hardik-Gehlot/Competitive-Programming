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
    int n;
    get n;
    stack<pi> st;
    rep(i,0,n){
        int x;
        get x;
        while(!st.empty() && st.top().F >= x) st.pop();
        if(st.empty()) put 0;
        else put st.top().S;
        st.push({x,i+1});
        put " ";
    }
}
signed main(){
    int t=1;
    // in t;
    while(t--){
        test();
    }
}