#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    int d = 5;
    while(n/d >0){
        //counting all the factors of 5 that participate in factorial like for 5 factors in 25!
        //we get 25/5 = 5 means we have 5 factors of 5 i.e  5 10 15 20 25
        //and one factor of 25 i.e 25 so total answer is 6
        cnt += n/d;
        d *=5; //counting factor of 5 then 25 then 125 and so on;
    }
    cout<<cnt;
    return 0;
}