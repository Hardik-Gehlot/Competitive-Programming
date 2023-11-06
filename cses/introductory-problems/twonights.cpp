#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
        if(i==1) cout<<0<<endl;
        else if(i==2) cout<<6<<endl;
        else if(i==3) cout<<28<<endl;
        else{
            int sq = i*i;
            long long int x = (1LL*sq*(sq-1))/2;
            //Attackings => (n-2)*[(n-4)*2 + 10] + (n-4)*2 + 4
            long long int attackings = (4*i-8)*(i-1);
            cout<<(x-attackings)<<endl;
        }
    }
    return 0;
}