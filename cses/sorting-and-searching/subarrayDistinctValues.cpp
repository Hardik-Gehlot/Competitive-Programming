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
    int n,k;
    in(n,k);
    takev(v,n);
    unordered_map<int,int> map;
    ll ans = 0;
    int i=0,j=0;
    while(i<n){
        while(j<n && ((int)map.size()<k or map.count(v[j])>0)){
            map[v[j]]++;
            j++;
        }
        ans += j-i;
        map[v[i]]--;
        if(map[v[i]]==0) map.erase(v[i]);
        i++;
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