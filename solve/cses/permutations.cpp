#include<bits/stdc++.h>
// #include "template.h"
 
using namespace std;
void solve() {
        
    int n;
    cin >> n;
 
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << '\n';
        return;
    }
    for(int i = 2;i <= n;i = i+2){
        cout << i << " ";
    }
    
    for(int i = 1;i <= n;i = i+2){
        cout << i << " ";
        
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
}