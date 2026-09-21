#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll y,k,n;
    cin >> y >> k >> n;
    ll x = y>k?k-y%k:k-y;
    if(x<0 || x>(n-y) || y == n){
        cout << - 1 << endl;
        return;
    }

    for(int i=0;x+i<=n-y;i=i+k){
        if(x+i == 0){
            continue;
        }
        cout << x+i << " ";
    }
    cout << endl;


}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}