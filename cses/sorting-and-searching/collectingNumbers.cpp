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
    for(int i=0; i<n; ++i){
        int x;
        get x;
        v[x-1] = i;
    }
    int count = 1,prev=0;
    for(int i=0; i<n; ++i){
        if(prev>v[i])count++;
        prev = v[i];
    }
    put count;
    return 0;
}