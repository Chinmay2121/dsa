// Problem Link : https://codeforces.com/contest/2276/problem/A

#include<bits/stdc++.h>

// #include "../../templates/template.h"

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second
const ll MOD = 1e9+7;
const int N = 1e5+5;

using namespace std;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
    
}

void solve() {
    
    int a, b;
    cin >> a >> b;

    if(a <= b){
        cout << -1 << '\n';
        return;
    }

    cout << min(b, a-b) << '\n';

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