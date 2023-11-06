#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
int main(){
    int n,m,k;
    get n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0; i<n; i++) get a[i];
    for(int i=0; i<m; i++) get b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i=0,j=0;
    int ans = 0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            //take it
            i++;
            j++;
            ans++;
        }else if(a[i]>b[j]) j++;
        else i++;
    }
    put ans;
    return 0;
}