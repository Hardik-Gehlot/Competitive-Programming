#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> arr; //Creating Array of String which Contains code

    //For 1 size code we have 2 values only 0 and 1
    arr.push_back("0");
    arr.push_back("1");

    //now for each code length we get number of codes i.e 2^n
    for(int i=2; i<(1<<n); i = (i<<1)){
        //Adding previous codes in reverse order into same order so that we achieve
        //the number of codes we require for each code length
        for(int j=i-1; j>=0; j--){
            arr.push_back(arr[j]);
        }

        //Now we have correct number of codes i.e 2^n but we have code length of n-1
        //that is we only have length of previous code, so to increament it by we add
        //0 in the first half of array and 1 in other half
        for(int j=0; j<i; ++j){
            arr[j] = "0"+arr[j];
        }
        for(int j=i; j<2*i; ++j){
            arr[j] = "1"+arr[j];
        }
    }
    for(string s:arr){
        cout<<s<<"\n";
    }
    return 0;
}