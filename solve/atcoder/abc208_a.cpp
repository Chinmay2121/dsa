#include<bits/stdc++.h>
#include "../../templates/template.h"

using namespace std;
/*  
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 
const ll MOD = 1e9+7;
const int N = 1e5+5;
*/

// ------------------ Main Driver ------------------ //
void solve(){
    
    int n;
    cin >> n;

    vector<int> dp;
    int fact = 1;
    int val = 0;
    int i = 0;  
    int ans = 0;

    while(val <= n){
        fact*=(++i);
        val+=fact;
        debug(val,i,fact,n);
    }
    cout << i*(i-1)/2 << '\n';
}


int main(){
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cout << "Hello World\n";
    return -1;

    // cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}
