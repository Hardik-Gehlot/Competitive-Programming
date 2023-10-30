#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<1;
    else if(n==2 or n==3) cout<<"NO SOLUTION";
    else{
        int check = ((n&1==1))?2:1;
        if(abs(check-n)==1) cout<<"NO SOLUTION";
        else{
            for(int i=(check==2)?1:2; i<=n; i+=2){
                cout<<i<<" ";
            }
            for(int i=check; i<=n; i+=2){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}