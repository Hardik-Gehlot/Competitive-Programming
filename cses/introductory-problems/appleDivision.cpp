#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
long long int sum;
long long int diff = INT_MAX;
void solve(int ind, long long int setone, vector<int> &arr){
    if(ind == (int)arr.size()){
        diff = min(diff, abs((sum-setone)-setone));
        return;
    }
    //notTake
    solve(ind+1, setone, arr);
    //take
    solve(ind+1, setone+arr[ind], arr);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    solve(0, 0, arr);
    put diff;
    return 0;
}