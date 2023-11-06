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
class seg_tree{
    vector<int> seg;
    int size=0;
    public:

    seg_tree(int n){
        seg.resize(4*n+1);
        size = n;
    }
    void build(vector<int>& arr,bool isOR,int ind=0,int low=0, int high=-1){
        if(high==-1)high=size-1;
        if(low==high){
            seg[ind]=arr[low];
            return;
        }
        int mid = (low+high)>>1;
        build(arr,!isOR,ind*2+1,low,mid);
        build(arr,!isOR,ind*2+2,mid+1,high);
        if(isOR) seg[ind]=seg[ind*2+1] | seg[ind*2+2];
        else seg[ind]=seg[ind*2+1] ^ seg[ind*2+2];
    }
    int query(){
        return seg[0];
    }
    void update(int idx,int val,bool isOR,int ind=0,int low=0,int high=-1){
        if(high==-1)high=size-1;
        if(low==high){
            seg[ind]=val;
            return;
        }
        int mid = (low+high)>>1;
        if(idx<=mid) update(idx,val,!isOR,ind*2+1,low,mid);
        else update(idx,val,!isOR,ind*2+2,mid+1,high);
        if(isOR) seg[ind]=seg[ind*2+1] | seg[ind*2+2];
        else seg[ind]=seg[ind*2+1] ^ seg[ind*2+2];
    }
};
signed main(){
    int n,m;
    get n>>m;
    bool isOR = (n&1)?true:false;
    n = 1<<n;
    vector<int>arr(n);
    rep(i,0,n) get arr[i];
    seg_tree st(n);
    st.build(arr,isOR);
    while(m--){
        int idx,val;
        get idx>>val;
        st.update(idx-1,val,isOR);
        arr[idx-1] = val;
        put st.query() nl
    }
    return 0;
}