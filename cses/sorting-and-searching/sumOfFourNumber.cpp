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
    vii v(n);
    rep(i,0,n) get v[i].first, v[i].second=i+1;
    sort(all(v));
    repd(i,n-1,3){
        repd(j,i-1,2){
            int l=0,r=j-1;
            while(l<r){
                if(v[l].F+v[r].F+v[i].F+v[j].F==x){
                    out(v[l].S,v[r].S,v[i].S,v[j].S);
                    return;
                }else if(v[l].F+v[r].F+v[i].F+v[j].F>x) r--;
                else l++;
            }
        }
    }
    put "IMPOSSIBLE";
}
signed main(){
    int t=1;
    // in t;
    while(t--){
        test();
    }
}