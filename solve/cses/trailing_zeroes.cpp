#include<bits/stdc++.h>
// #include "template.h"
 
using namespace std;
void solve() {
        
    int n;
    cin >> n;
    if(n < 5){
        cout << 0 << '\n';
        return;
    }
 
    int i = 5;
    int cnt = 0;
    while(i <= n){
        cnt = cnt + n/i;
        i = i*5;
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