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
    vector<int> v(n);
    rep(i,0,n) get v[i];
    int ans = 0;
    set<int> s;
    int i=0,j=0;
    while(i<n and j<n){
        while(j<n and !s.count(v[j])){
            s.insert(v[j]);
            ans = max(ans, j-i+1);
            j++;
        }
        while(j<n and s.count(v[j])){
            s.erase(v[i]);
            i++;
        }
    }
    put ans nl
    return 0;
}