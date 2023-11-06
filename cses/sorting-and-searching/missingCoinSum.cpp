#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf 1e9+7
#define rep(i,a,b) for(int i=(a); i<(n); ++i)
#define repd(i,a,b) for(int i=(a); i>=(n); --i)
int main(){
    int n;
    get n;
    vector<int> v(n);
    rep(i,0,n) get v[i];
    sort(v.begin(),v.end());
    long long int sum = 0; // it means so far how much money we can make it
    rep(i,0,n){
        if((v[i]-1)>sum) break; //if so far money we can make is greater than one less than current amount it means we got an point which we can make
        else sum += v[i]; // if we came to the point were money we can make is bigger then coin it means  we can make more money from it so add it
    }
    put sum+1; //print so far we can make plus 1 means this is the minimum amount we can't make
    return 0;
    /*
    Example: 2 1 8 9 2
    coins after sorting 1 2 2 8 9
    for i=0 => a[0]-1(1-1=0) is not greater than sum(0) so sum=a[0]+sum i.e 1
    for i=1 => a[1]-1(2-1=1) is not greater than sum(1) so sum=a[1]+sum i.e 3 it means using this coins(1 and 2) we can make till 3(1 2 3)
    for i=2 => a[2]-1(2-1=1) is not greater than sum(3) so sum=a[2]+sum i.e 5 it means using this coins(1, 2 and 2) we can make till 5(1 2 3 4 5)
    for i=3 => a[3]-1(8-1=7) is greater than sum(5) it means we can't make coins between 5+1 to 8 i.e 6 and 7
    therefore if we try to make coins using 8 we can only make (1 2 3 4 5 8 9 10 11 12 13)
    i.e from 1 to previous sum(5) and from current coin(8) to current sum(8+5==13) and we cant make in between coins i.e 6 and 7
    therefore for a condition where a[i]-1>sum means we are broken in link we can't make coins
    so the answer is sum(5)[so far can make] + 1
    */
}