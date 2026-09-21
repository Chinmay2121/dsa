// Link : https://codeforces.com/problemset/problem/2174/A

#include <bits/stdc++.h>
#include "../../templates/template.h"

using namespace std;

void solve(){

    string s;
    string t;
    cin >> s >> t;

    unordered_map<char,int> mps;
    unordered_map<char,int> mpt;

    for(char x : s)
        mps[x]++;
    for(char x : t)
        mpt[x]++;

    for(char x : s){
        if(mpt[x] < mps[x]){
            cout << "Impossible\n";
            return;
        }
    }
    for (char x : s)
        mpt[x]--;

    string tp;

    for (auto [ch, cnt] : mpt) {
        while (cnt--)
            tp += ch;
    }
    sort(tp.begin(),tp.end());
    string ans;
    int i = 0;
    int j = 0;

    while((int)i < s.size() && (int)j < tp.size()){
        debug(s[i],tp[j]);
        if(s[i] <= tp[j]){
            ans+=s[i++];
        }
        else{
            ans+=tp[j++];
        }
    }
    while((int)i < s.size()){
        ans+=s[i++];
    }
    while((int)j < tp.size()){
        ans+=tp[j++];
    }

    cout << ans << '\n';

}
int main() {

    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}   