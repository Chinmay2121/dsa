#include<bits/stdc++.h>
// #include "../../templates/template.h"

using namespace std;

#ifndef TEMPLATE_H
#define TEMPLATE_H

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second
const ll MOD = 1e9+7;
const int N = 1e5+5;

#endif

void solve() {

    int n;
    cin >> n;

    vector<int> v(n);
    long long sum = 0;
    for(int i = 0;i < n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    vector<bool> dp(sum+1);
    dp[0] = true;

    int cnt = 0;
    
    for (int x : v) {

        for (int s = sum; s >= x; s--) {
            if (dp[s - x]) {
                dp[s] = true;
            }
        }
    }
    vector<int> ans;
    for(int i = 1;i <= sum;i++){
        if(dp[i]){
            ans.push_back(i);
        }
    }
    cout << ans.size();
    cout << '\n';
    for(int ans_ele : ans){
        cout << ans_ele << " ";
    }
    cout << '\n';

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t = 1;
    //int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}