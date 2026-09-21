#include<bits/stdc++.h>
using namespace std;
void solve(){

    int l,d,r,u;
    cin >> l >> d >> r >> u;
    if(l == d && l == r && l ==u){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


}
int main(){

    // int t = 1;
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}