// Link :https://codeforces.com/problemset/problem/2185/D

#include <bits/stdc++.h>
#define ll long long
// #include "../../templates/template.h"

using namespace std;

void solve(){

    int n,m,h;
    cin >> n >> m >> h;

    vector<int> v(n+1);
    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }
    vector<int> original = v;
    vector<int> last_update(n+1,-1);
    int last_reset = -1;
    for(int tt = 0;tt < m;tt++){

        int b,c;
        cin >> b >> c;
        if(last_update[b] < last_reset){
            v[b] = original[b];
        }
        v[b]+=c;
        if(v[b] > h){
            v[b] = original[b];
            last_update[b] = tt;

            last_reset = tt;
        }
        last_update[b] = tt;

    }
    for(int i = 1;i <= n;i++){
        if(last_update[i] < last_reset){
            v[i] = original[i];
        }
        cout << v[i] << ' ';
    }
    cout << '\n';

}
int main() {

    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}   