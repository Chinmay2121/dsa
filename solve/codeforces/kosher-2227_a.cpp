// Link: https://codeforces.com/contest/2227/problem/A


// ------------------ Code ------------------ //

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
    
    int x,y;
    cin >> x >> y;

    if(x%2 == 0 && y%2 == 0){
        cout << "YES\n";
        return;
    }
    else if(((x-1)%2 == 0 && y%2 == 0) || ((y-1)%2 == 0 && x%2 == 0)){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";


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

