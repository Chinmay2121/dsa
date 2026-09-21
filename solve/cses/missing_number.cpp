#include<bits/stdc++.h>
// #include "template.h"
 
using namespace std;
void solve() {
        
    long long n;
    cin >> n;
 
    vector<long long> v(n);
    for(int i = 1;i < n;i++){
        cin >> v[i];
    }
    sort(v.begin()+1,v.end());
    for(long long i = 1;i <= n;i++){
        if(v[i] != i){
            cout << i << " ";
            break;
        }
    }
    
    cout << '\n';
 
   
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
    