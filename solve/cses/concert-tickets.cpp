#include<bits/stdc++.h>
// #include "template.h"

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
        
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    vector<int> a(m);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    for(int i = 0;i < m;i++){
        cin >> a[i];
    }
    multiset<int> tickets;

    for(int x : v)
        tickets.insert(x);

    for(int x : a){
        auto it = tickets.upper_bound(x);

        if(it == tickets.begin()){
            cout << -1 << '\n';
        }
        else{
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

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
