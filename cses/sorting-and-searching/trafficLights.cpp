#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
int main(){
    int n,q;
    get n>>q;
    set<int> s;
    multiset<int> lengths;
    s.insert(0);
    s.insert(n);
    lengths.insert(n);
    while(q--){
        int x;
        get x;
        s.insert(x);
        auto it = s.find(x);
        int prevValue = *prev(it);
        int nextValue = *next(it);
        lengths.erase(lengths.find(nextValue-prevValue));
        lengths.insert(x-prevValue);
        lengths.insert(nextValue-x);
        int ans = *lengths.rbegin();
        put ans<<" ";
    }
    return 0;
}