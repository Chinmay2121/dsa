#include<bits/stdc++.h>
// #include "../../templates/template.h"

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
        
    long long n,x;
    cin >> n >> x;

    vector<long long> v(n);
    for(int i = 0;i < n;++i) cin >> v[i];

    vector<long long> dp(x+1,0);
    dp[0] = 1;

    for(long long i = 1;i <= x;i++){
        for(long long coin : v){
            if(coin <= i){
                dp[i]+=dp[i-coin]%MOD;
            }
        }
    }
    // debug(dp);
    cout << dp[x]%MOD << '\n';


}



int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    
    int t = 1;
    //int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }
 
    return 0;
}