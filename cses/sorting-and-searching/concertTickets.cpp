#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
int main(){
    int n,m;
    get n>>m;
    multiset<int> s; //To store duplicate values
    for(int i=0;i<n;i++){
        int x;
        get x;
        s.insert(x);
    }
    while(m--){
        int x;
        get x;
        auto y = s.upper_bound(x); //value which is lower or equal to x
        if(y == s.begin()) put -1 nl // if it is begin means we dont find such value
        else{
            put *(--y) nl; // it give iterator which is one more or it give exclusive one to access actual element decrement it by one
            s.erase(y);
        }
    }
    return 0;
}