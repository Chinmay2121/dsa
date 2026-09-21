#include<bits/stdc++.h>

// #include "../templates/template.h"


#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 

const ll MOD = 1e9+7;
const int N = 1e5+5;



using namespace std;


// ------------------ Main Driver ------------------ //



void solve() {
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    vector<int> dp(n);

    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);

    for(int i = 2;i < n;i++){
        dp[i] = min(dp[i-1]+abs(v[i]-v[i-1]),dp[i-2]+abs(v[i]-v[i-2]));
    }

    cout << dp[n-1] << "\n";


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

