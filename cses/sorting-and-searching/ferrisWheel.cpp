#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
int main(){
    int n,x;
    get n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)get a[i];
    sort(a.begin(), a.end());
    int i=0,j=n-1;
    int req=0;
    while(i<j){
        req++;
        if((a[i]+a[j])<=x){
            i++;
            j--;
        }else j--;
    }
    if(i==j) req++;
    put req;
    return 0;
}