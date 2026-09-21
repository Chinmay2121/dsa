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

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    int left = 0;
    int right = 0;
    int max_val = 0;

    set<int> s;
    while(right < n){
        while(s.count(v[right])){
            s.erase(v[left]);
            left++;
        }
        s.insert(v[right++]);
        
        max_val = max(max_val,right - left);
    }

    cout << max_val << '\n';

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