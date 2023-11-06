#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
int main(){
    int n,m;
    get n>>m;
    vector<int> v(n+1);
    vector<int> arr(n+1);
    for(int i=1; i<=n; ++i){
        get arr[i];
        v[arr[i]] = i;
    }
    int count = 1,prev=1;
    for(int i=1; i<=n; ++i){
        if(prev>v[i])count++;
        prev = v[i];
    }
    while(m--){
        int a,b;
        get a>>b;
        set<pair<int,int>> s;
        int x = arr[a];
        int y = arr[b];
        swap(arr[a],arr[b]);
        
        //inserting pairs for comparisons
        if(x-1 >=1) s.insert({x-1,x});
        if(x+1 <=n) s.insert({x,x+1});
        if(y-1 >=1) s.insert({y-1,y});
        if(y+1 <=n) s.insert({y,y+1});

        //before position swapping
        for(pair<int,int>t:s){
            if(v[t.first]>v[t.second])count--;
        }
        swap(v[x],v[y]);
        //after position swapping
        for(pair<int,int>t:s){
            if(v[t.first]>v[t.second])count++;
        }
        put count nl
    }
    return 0;
}