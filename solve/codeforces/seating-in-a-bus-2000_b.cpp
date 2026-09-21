#include<bits/stdc++.h>

#include "../../templates/template.h"
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
using namespace std;

void solve() {
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    vector<bool> seats(n,0);
    for(int i = 0;i < n;i++){
        seats[v[i]] = true;
        debug(i,seats);
        if((i+1 < n) && (v[i+1]) && (i-1 >= 0) && (v[i-1])){
            cout << "NO\n";
            return;
        }
        if((i-1 >= 0) && (v[i-1])){
            cout << "NO\n";
            return;
        }
        if((i+1 < n) && (v[i+1])){
            cout << "NO\n";
            return;
        }

        
    }
    cout << "YES\n";

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

