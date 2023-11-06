#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf INT_MAX
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define repd(i,a,b) for(int i=(a); i>=(b); --i)
#define repi(i,a,b,c) for(int i=(a); i<(b); i+=(c))
signed main(){
    int n,sum;
    get n>>sum;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        int x;
        get x;
        if(x>=sum) continue;
        if(map.find(sum-x)!=map.end()){
            put map[sum-x]<<" "<< i+1;
            return 0;
        }else{
            map[x] = i+1;
        }
    }
    put "IMPOSSIBLE";
    return 0;
}