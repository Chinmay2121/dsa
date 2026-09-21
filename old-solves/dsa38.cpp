#include<bits/stdc++.h>
using namespace std;
void solve(){
    string x;
    cin >> x;
    vector<char> v;
    for(int i=0;i<x.size();i++){
        if(tolower(x[i])!='a' && tolower(x[i])!='e' && tolower(x[i])!='i' && tolower(x[i])!='o' && tolower(x[i])!='u' && tolower(x[i])!='y'){
            v.push_back('.');
            v.push_back(tolower(x[i]));
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    cout << endl;
}
int main(){
    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}