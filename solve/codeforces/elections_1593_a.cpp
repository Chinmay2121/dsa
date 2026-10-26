#include<bits/stdc++.h>

// #include "../../templates/template.h"

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

void solve() {
    
    long long a, b, c;
    cin >> a >> b >> c;

    long long mx = max({a, b, c});

    long long A = (a == mx && a > b && a > c) ? 0 : mx - a + 1;
    long long B = (b == mx && b > a && b > c) ? 0 : mx - b + 1;
    long long C = (c == mx && c > a && c > b) ? 0 : mx - c + 1;

    cout << A << " " << B << " " << C << '\n';

}

// ------------------ Main Driver ------------------ //

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    // int t = 1;
    int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}