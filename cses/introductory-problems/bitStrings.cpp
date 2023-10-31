#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main(){
    int n;
    cin >> n;
    int res=1;
    int x = 2;
	while(n>0){
		if (n&1) res = (1ll*res*x)%mod;
        n=n>>1;
        x=(1ll*x*x)%mod;
	}
    cout<<res;
    return 0;
}