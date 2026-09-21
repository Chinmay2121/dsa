#include<bits/stdc++.h>
// #include "templates/template.h"
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<long long> res(n+1);
    res[0] = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        res[i] = res[i-1] + x;
    }

    for(int i = 0;i < q;i++) {
        int a, b;
        cin >> a >> b;
        cout << res[b]-res[a-1];
        cout << '\n';
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