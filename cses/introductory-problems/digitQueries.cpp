#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<

long long pow10(int n){
    long long ans = 1;
    long long t=10;
    while(n>0){
        if(n&1) ans *= t;
        t = t*t;
        n>>=1;
    }
    return ans;
}
int main(){
    int q;
    get q;
    while(q--){
        long long ind;
        cin>>ind;
        /*
            digit size 1 for number 1 to 9 -> numbers are 9 -> total indexes are 1*9 = 9
            digit size 2 for number 10 to 99 -> numbers are 90 -> total indexes are 2*90 = 180
            digit size 3 for number 100 to 999 -> numbers are 900 -> total indexes are 3*900 = 2700
        */
        int digit_size = 1;
        while(ind > (digit_size * 9 * pow10(digit_size-1))){
            ind -= digit_size * 9 * pow10(digit_size-1);
            digit_size++;
        }
        long long startNumber = pow10(digit_size-1);
        long long additionalNumber = (ind-1)/digit_size;
        long long number = startNumber + additionalNumber;
        int position = (ind-1)%digit_size;
        put to_string(number)[position] nl;
    }
    return 0;
}