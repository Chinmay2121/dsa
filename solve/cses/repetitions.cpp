#include<bits/stdc++.h>
// #include "template.h"
 
using namespace std;
void solve() {
        
    string x;
    cin >> x;
 
    int cur = 1,maxCnt = 1;
    for(int i = 0;i < x.size()-1;i++){
        if(x[i] == x[i+1]){
            cur++;
            maxCnt = max(cur,maxCnt);
        }
        else{
            cur = 1;
        }
    }
    cout << maxCnt << '\n';
   
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