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
    ll low=0,high=1e18;
    ll ans = 0;
    while(low<=high){
        ll mid = (low+high)>>1;
        ll sum=0;
        int cnt=0;
        rep(i,0,n){
            sum+=v[i];
            if(sum>mid){
                cnt++;
                sum=v[i];
            }
            if(v[i]>mid or cnt>=k){
                cnt=k+1; break;
            }
        }
        if(cnt>k) low=mid+1;
        else{
            ans = mid;
            high = mid-1;
        }
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