#include<bits/stdc++.h>
// #include "template.h"
 
using namespace std;
void solve() {
        
    int n;
    cin >> n;
 
    vector<long long> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    long long cnt = 0;
    for(int i = 0;i < n-1;i++){
        if(v[i+1] < v[i]){
            cnt = cnt+(v[i]-v[i+1]);
            v[i+1] = v[i+1] + (v[i]-v[i+1]);
        }
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