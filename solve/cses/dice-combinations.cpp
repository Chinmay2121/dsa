#include<bits/stdc++.h>
// #include "template.h"

#define ll long long
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define fi first
// #define se second 
const ll MOD = 1e9+7;
// const int N = 1e5+5;

using namespace std;
void solve() {
        
    int n;
    cin >> n;

    vector<long long> v(n+1,0);
    v[0] = 1;
    v[1] = 1;

    for(long long i = 2;i <= n;i++){
        for(long long j = 1;j <= 6;j++){
            if (i - j >= 0) {
                v[i] = (v[i] + v[i - j]) % MOD;
            }
        }
    }
    cout << v[n]%MOD << '\n';

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