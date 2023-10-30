#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    string s;
    cin>>s;
    int n=s.size();
    char ch=s[0];
    int cnt=1;
    int mx=1;
    for(int i=1; i<n; i++){
        if(ch==s[i]){
            cnt++;
            mx = max(mx,cnt);
        }else{
            cnt=1;
            ch=s[i];
        }
    }
    cout<<mx;
    return 0;
}