#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid(8);
    for (int i = 0; i < 8; i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < 8; i++) {
        if (count(grid[i].begin(), grid[i].end(), 'R') == 8) {
            cout << "R" << endl;
            return;
        }
    }
    cout << "B" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}