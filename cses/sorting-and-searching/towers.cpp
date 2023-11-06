#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
int main(){
    int n;
    get n;
    multiset<int> s;
    rep(i,0,n){
        int x;
        get x;
        auto y = s.lower_bound(x+1);
        if(y != s.end()) s.erase(y);
        s.insert(x);
    }
    put s.size();
    return 0;
}