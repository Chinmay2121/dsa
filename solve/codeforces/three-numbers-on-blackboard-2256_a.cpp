// Link :https://codeforces.com/contest/2256/problem/A

#include <bits/stdc++.h>
#define ll long long
// #include "../../templates/template.h"

using namespace std;

void solve(){

    vector<int> v(3);
    for(int i = 0;i < 3;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int min_range = min(v[2]-v[0], v[1]);
    cout << min_range << '\n';

}
int main() {

    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}   