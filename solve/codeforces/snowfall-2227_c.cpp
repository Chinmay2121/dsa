// Link: https://codeforces.com/contest/2227/problem/C


// ------------------ Code ------------------ //

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
    
    int n;
    cin >> n;
    vector<int> a, b, c, d;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 6 == 0) a.push_back(x);
        else if(x % 2 == 0) b.push_back(x);
        else if(x % 3 == 0) c.push_back(x);
        else d.push_back(x);
    }

    vector<int> ans;
    for(auto it : a) ans.push_back(it);
    for(auto it : b) ans.push_back(it);
    for(auto it : d) ans.push_back(it);
    for(auto it : c) ans.push_back(it);
        
    for(int i = 0; i < n; i++) cout << ans[i] <<  " \n"[i == n - 1];


}

// ------------------ Main Driver ------------------ //

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}

