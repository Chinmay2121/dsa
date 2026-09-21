#include<bits/stdc++.h>
// #include "../templates/template.h"

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
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = n - 1;
    int cnt = 0;

    while(i <= j){
        if(v[i] + v[j] <= x){
            i++;
            j--;
        } else {
            j--;
        }
        cnt++;
    }

    cout << cnt << '\n';
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