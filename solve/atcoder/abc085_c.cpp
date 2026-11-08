#include<bits/stdc++.h>

// #include "templates/template.h"

using namespace std;

#ifndef TEMPLATE_H
#define TEMPLATE_H

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second

const ll MOD = 1e9+7;
const int N = 1e5+5;

#endif

// ------------------ Main Driver ------------------ //

void solve() {
    int N, Y;
    cin >> N >> Y;

    
    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N; y++) {
            int z = N - x - y;

            if(z >= 0 && 10000*x + 5000*y + 1000*z == Y) {
                cout << x << " " << y << " " << z <<'\n';
                return; 
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << '\n';

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}