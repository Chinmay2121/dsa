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
void solve() {
        
    int n;
    cin >> n;
    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll total = 1LL << n;
    ll ans = LLONG_MAX;

    for(ll i = 0; i < total; i++) {

        ll sum1 = 0, sum2 = 0;

        for(int j = 0; j < n; j++) {

            if(i & (1LL << j))
                sum1 += v[j];
            else
                sum2 += v[j];
        }

        ans = min(ans, abs(sum1 - sum2));
    }

    cout << ans << '\n';
}



int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t = 1;
    // cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }
 
    return 0;
}