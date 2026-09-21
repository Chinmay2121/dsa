#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    int cnt = 0;
    int len = 0;
    for(int i=0;i<n;i++){
        string y;
        cin >> y;
        len = len+ y.length();
        if(y.length()<=m && len<=m){
            cnt++;
            

        }
    }    
    cout << cnt << endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        solve();
    }


    return 0;
}
