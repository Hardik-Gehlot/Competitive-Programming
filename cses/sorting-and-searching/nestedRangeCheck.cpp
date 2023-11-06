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
struct range
{
    int left, right, index;
    bool operator < (const range& other) const {
        if(left == other.left){
            return right > other.right;
        }
        return left < other.left;
    }
};

signed main(){
    int n;
    get n;
    vector<range> ranges(n);
    vector<bool> contained(n);
    vector<bool> contains(n);
    rep(i,0,n){
        get ranges[i].left>>ranges[i].right;
        ranges[i].index = i;
    }
    sort(ranges.begin(), ranges.end());
    int mini=inf, maxi=-inf;
    rep(i,0,n){
        if(ranges[i].right<=maxi) contained[ranges[i].index]=true;
        if(ranges[n-i-1].right>=mini) contains[ranges[n-i-1].index]=true;
        maxi = max(maxi,ranges[i].right);
        mini = min(mini,ranges[n-i-1].right);
    }
    rep(i,0,n) put contains[i] <<" ";
    put "" nl
    rep(i,0,n) put contained[i]<<" ";
}