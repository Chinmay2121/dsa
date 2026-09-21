#include<bits/stdc++.h>
// #include "../../templates/template.h"

// #define ll long long
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define fi first
// #define se second 
// const ll MOD = 1e9+7;
// const int N = 1e5+5;


using namespace std;
void solve() {
        
    long long n,k;
    cin >> n >> k;

    vector<long long> coins(n);
    for(int i = 0;i < n;i++){
        cin >> coins[i];
    }

    vector<long long> dp(k+1,INT_MAX);
    dp[0] = 0;
    for(long long i = 1;i <= k;i++){
        for(long long j = 0;j < n;j++){
            if(coins[j] <= i)
                dp[i] = min(dp[i],dp[i-coins[j]]+1);
        }
    } 
    // debug(dp);
    if(dp[k] == INT_MAX){
        dp[k] = -1;
    }
    cout << dp[k] << '\n';


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