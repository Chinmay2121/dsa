#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin >> n;
    
    vector<int> a(n);
    ll cola = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        cola+=a[i];
    }
    vector<int> b(n);
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll capacity = b[n-1]+b[n-2];

    if(capacity >= cola){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }


}
int main(){

    int t = 1;
    // int t;
    // cin >> t;
    while(t--){
        solve();
    }



}