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
struct Node{
    public:
    int open,close,full;
    Node(){
        open = 0;
        close = 0;
        full=0;
    }
    Node(int o,int c,int f){
        open = o;
        close = c;
        full = f;
    }
};
class seg_tree{
    vector<Node> seg;
    int size=0;
    public:
    seg_tree(int n){
        seg.resize(4*n+1);
        size = n;
    }
    void build(string &s,int ind=0,int low=0, int high=-1){
        if(high==-1)high=size-1;
        if(low==high){
            if(s[low]=='(') seg[ind]= Node(1,0,0);
            else seg[ind] = Node(0,1,0);
            return;
        }
        int mid = (low+high)>>1;
        build(s,ind*2+1,low,mid);
        build(s,ind*2+2,mid+1,high);
        Node node;
        node.open = seg[ind*2+1].open + seg[ind*2+2].open - min(seg[ind*2+1].open,seg[ind*2+2].close);
        node.close = seg[ind*2+1].close + seg[ind*2+2].close - min(seg[ind*2+1].open,seg[ind*2+2].close);
        node.full = seg[ind*2+1].full + seg[ind*2+2].full + min(seg[ind*2+1].open,seg[ind*2+2].close);
        seg[ind]= node;
    }
    Node query(int l,int r,int ind=0,int low=0,int high=-1){
        if(high==-1)high=size-1;
        //Non overlapping
        if(l>high or r<low) return Node(0,0,0);
        //Complete overlapping
        if(l<=low and r>=high) return seg[ind];
        int mid = (low+high)>>1;
        Node left = query(l,r,ind*2+1,low,mid);
        Node right = query(l,r,ind*2+2,mid+1,high);
        Node node;
        node.open = left.open + right.open - min(left.open,right.close);
        node.close = left.close + right.close - min(left.open,right.close);
        node.full = left.full + right.full + min(left.open,right.close);
        return node;
    }
};
signed main(){
    string s;
    get s;
    int n = s.size();
    seg_tree st(n);
    st.build(s);
    int q;
    get q;
    while(q--){
        int l,r;
        get l>>r;
        put st.query(l-1,r-1).full*2 nl
    }
    return 0;
}