#include<bits/stdc++.h>

// #include "../../templates/template.h"
#define ll long long
const ll MOD = 1e9+7;
const int N[[maybe_unused]] = 1e5+5;

using namespace std;


// ------------------ Main Driver ------------------ //



void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n,vector<char> (m));
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;j++){
            cin >> grid[i][j];
        }
    }
    vector<vector<long long>> dp(n,vector<long long> (m,0));
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;j++){
            if(grid[i][j] == '#'){
                dp[i][j] = 0;
                continue;
            }
            if(i == 0 && j == 0){
                dp[i][j] = 1;
            }
            if (i > 0)
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;

            if (j > 0)
                dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;

        }
    }
    cout << dp[n-1][m-1]%MOD << '\n';
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

