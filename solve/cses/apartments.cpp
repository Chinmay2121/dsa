#include<bits/stdc++.h>
// #include "template.h"
 
using namespace std;
void solve() {
        
    int n,m,k;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0;i < n;++i){
        cin >> a[i];
    }
    for(int i = 0;i < m;++i){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int cnt = 0;

    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            j++;
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