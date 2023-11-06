#include<bits/stdc++.h>
using namespace std;
#define nl <<'\n';
#define get cin>>
#define put cout<<
int main(){
    int n;
    get n;
    vector<pair<int,int>> movies;
    for(int i = 0; i <n; i++){
        int a,b;
        get a>>b;
        movies.push_back({a,b});
    }
    sort(movies.begin(),movies.end());
    int end = 0;
    int watch = 0;
    for(auto &movie : movies){
        if(end>movie.first){
            end = min(end,movie.second);
        }else{
            watch++;
            end = movie.second;
        }
    }
    put watch;
    return 0;
}