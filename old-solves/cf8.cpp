#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;
    
    vector<int> v(n+1);

    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }

    vector<int> dp(n+1,0);
    for(int i = 1;i <=n;i++){
        dp[v[i]] = i;

    }
    
    for(int i =1;i <= n;i++){
        cout << dp[i] << " ";
    }
    cout << endl;
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