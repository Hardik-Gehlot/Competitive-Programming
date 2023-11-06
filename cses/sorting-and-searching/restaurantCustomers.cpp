#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
#define inf 1e9+7
int main(){
    int n;
    get n;
    //prefix sum
    vector<pair<int,int>> times;
    while(n--){
        int a,b;
        get a>>b;
        times.push_back({a,1});
        times.push_back({b,-1});
    }
    sort(times.begin(), times.end());
    int currSum = 0;
    int mx = 0;
    for(auto &t: times){
        currSum += t.second;
        mx = max(mx,currSum);
    }
    put mx;
    return 0;
}