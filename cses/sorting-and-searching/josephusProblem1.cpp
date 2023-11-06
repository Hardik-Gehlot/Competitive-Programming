#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
#define sz(n) (int)n.size()
int main(){
    int n;
    get n;
    vector<int> v(n);
    rep(i,0,n) v[i]=i+1;
    while(sz(v)>1){
        vector<int> support;
        for(int i=0;i<sz(v);++i){
            if(i%2){
                put v[i]<<" ";
            }else{
                support.push_back(v[i]);
            }
        }
        if(sz(v)%2==0){
            v=support;
        }else{
            int ele = support.back();
            support.pop_back();
            v.clear();
            v.push_back(ele);
            for(int i=0;i<sz(support);++i){
                v.push_back(support[i]);
            }
        }
    }
    put v[0];
    return 0;
}