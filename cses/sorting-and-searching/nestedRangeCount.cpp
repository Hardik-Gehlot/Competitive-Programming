#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;	
typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> orderSet;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
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
    vector<int> contained(n);
    vector<int> contains(n);
    orderSet setA,setB;
    rep(i,0,n){
        get ranges[i].left>>ranges[i].right;
        ranges[i].index = i;
    }
    sort(ranges.begin(), ranges.end());
    rep(i,0,n){
        int val = (i)-setA.order_of_key(ranges[i].right);
        contained[ranges[i].index]=val;
        val = setB.order_of_key(ranges[n-i-1].right+1);
        contains[ranges[n-i-1].index]=val;
        setA.insert(ranges[i].right);
        setB.insert(ranges[n-i-1].right);
    }
    rep(i,0,n) put contains[i] <<" ";
    put "" nl
    rep(i,0,n) put contained[i]<<" ";
    return 0;
}