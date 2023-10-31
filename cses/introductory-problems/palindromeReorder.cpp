#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main(){
    string s;
    cin>>s;
    for(unsigned int i=0; i<s.size(); ++i){
        freq[s[i]-'A']++;
    }
    char single;
    int oddCount = 0;
    string a;
    for(int i=0; i<26; i++){
        if(freq[i]&1){
            oddCount++;
            single = i+'A';
            if(oddCount==2){
                cout<<"NO SOLUTION";
                return 0;
            }
        }
        int sz = freq[i]>>1;
        char ch = i+'A';
        for(int i=0; i<sz; i++){
            a.push_back(ch);
        }
    }
    string b = a;
    reverse(b.begin(), b.end());
    if(oddCount==1) a.push_back(single);
    cout<<a<<b;
    return 0;
}