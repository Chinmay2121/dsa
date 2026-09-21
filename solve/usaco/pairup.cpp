#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<pair<long long, long long>> v;

    for(int i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());

    long long ans = 0;

    int i = 0;
    int j = n - 1;

    while(i < j) {

        ans = max(ans, v[i].first + v[j].first);

        long long take = min(v[i].second, v[j].second);

        v[i].second -= take;
        v[j].second -= take;

        if(v[i].second == 0)
            i++;

        if(v[j].second == 0)
            j--;
    }

    if(i == j && v[i].second >= 2) {
        ans = max(ans, 2 * v[i].first);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    solve();

    return 0;
}