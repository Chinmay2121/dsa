#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
void solve(){
    ll n;
    cin >> n;
    n = n%mod;
    int cnt = 0;
    while(n!=1 && n>0){
        if(n%6==0){
            n = (n/6);
        }
        else{
            n = (n*2);
        }
        cnt++;
    }
    if(n==1){
        cout << cnt << endl;
    }
    else{
    cout << -1 << "\n";
    }

}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}