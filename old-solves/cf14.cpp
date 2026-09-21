#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;
    if(n == 1){
        cout << - 1 << '\n';
        return;
    }
    if(n&1){
        cout << n << " " <<  << endl;

    }
    else{
        cout << n << " " << 2 << endl;
    }

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