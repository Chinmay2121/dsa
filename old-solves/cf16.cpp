#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << "\n";
        return;
    }

    cout << n*n + (n-1)*(n-1) << "\n";



    
}
int main(){

    int t = 1;
    // int t;
    // cin >> t;
    while(t--){
        solve();
    }


    return 0;

}