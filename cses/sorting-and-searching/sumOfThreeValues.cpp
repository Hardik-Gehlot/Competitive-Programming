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
signed main(){
    int n,x;
    get n>>x;
    vector<pair<int,int>> v(n);
    rep(i,0,n) get v[i].first, v[i].second=i+1;
    sort(v.begin(),v.end());
    repd(i,n-1,2){
        int j=0,k=i-1;
        while(j<k){
            if(v[i].first+v[j].first+v[k].first==x){
                put v[j].second<<" "<<v[k].second<<" "<<v[i].second;
                return 0;
            }else if(v[i].first+v[j].first+v[k].first>x) k--;
            else j++;
        }
    }
    put "IMPOSSIBLE";
    return 0;
}