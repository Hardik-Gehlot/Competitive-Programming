#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        //since we remove 2 coins from one and 1 from another for every move
        //therefore we remove 3 coins in each move from any side
        //therefore total coins should be be multiple of 3
        /*example of some number
            1 -> 2
            2 -> 1 4
            3 -> 3 6
            4 -> 2 5 8
            5 -> 4 7 10
            6 -> 3 6
            7 -> 5 8 11 14
            8 -> 4 7 10 13 16
            from above examples we can see that for every first number another number
            should be from firstNumber/2 to firstNumber*2
            therefore a/2 <= b <= 2a
        */
	    if ((a+b)%3==0 && (2*a>=b) && (a/2 <= b)) cout<<"YES\n";
	    else cout<<"NO\n";
    }
    return 0;
}