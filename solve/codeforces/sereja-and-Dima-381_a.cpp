// Link: https://codeforces.com/problemset/problem/381/A
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
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    int l = 0, r = n-1;
    int se = 0, di = 0;
    bool flag = true;
    while(l <= r){  
        if(flag){
            if(v[l] > v[r]){
                se += v[l];
                l++;
            }
            else{
                se += v[r];
                r--;
            }
        }
        else{
            if(v[l] > v[r]){
                di += v[l];
                l++;
            }
            else{
                di += v[r];
                r--;
            }
        }
        flag = !flag;
    }

    cout << se << " " << di << '\n';
}

// ------------------ Main Driver ------------------ //

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

