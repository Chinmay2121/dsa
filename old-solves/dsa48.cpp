#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    ll odd_count = (n + 1) / 2; 

    if (k <= odd_count) {
        cout << 2 * k - 1 << endl; 
    } else {
        cout << 2 * (k - odd_count) << endl; 
    }
}

int main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}