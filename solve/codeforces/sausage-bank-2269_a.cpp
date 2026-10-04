// Link: https://codeforces.com/contest/2269/problem/A

#include<bits/stdc++.h>

// #include "../../templates/template.h"

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

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    long long ans = 0;
    long long money = 1;

    // Wait as long as possible before the first withdrawal
    for (int i = 0; i < n - k + 1; i++) {
        money *= 2;
    }

    ans += money;

    // After that, withdraw every day
    for (int i = 1; i < k; i++) {
        ans += 2;
    }

    cout << ans << '\n';
}


// ------------------ Main Driver ------------------ //

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    
    // int t = 1;
    int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}