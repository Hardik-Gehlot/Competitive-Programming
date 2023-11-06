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
struct range{
    int in,out,idx;
    bool operator < (const range& other) const{
        if(in == other.in){
            return out < other.out;
        }
        return out < other.out;
    }
};
signed main(){
    int n;
    get n;
    set<pair<int,int>> s;
    vector<range> v(n);
    vector<int>allocations(n);
    rep(i,0,n){
        get v[i].in>>v[i].out;
        v[i].idx = i;
    }
    sort(v.begin(),v.end());
    s.insert({-1,-1});
    rep(i,0,n){
        auto it = s.lower_bound({v[i].in,-1});
        if((*it).first!=-1)--it;
        if((*it).first==-1){
            allocations[v[i].idx] = s.size();
            s.insert({v[i].out,s.size()});
        }else{
            int room = (*it).second;
            s.insert({v[i].out,room});
            s.erase(it);
            allocations[v[i].idx] = room;
        }
    }
    put s.size()-1 nl
    rep(i,0,n){
        put allocations[i] << " ";
    }
    return 0;
}