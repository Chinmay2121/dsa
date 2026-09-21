#include<bits/stdc++.h>
using namespace std;
void solve(){

    string x,y;
    cin >> x >> y;

    for(int i = 0;i < x.size();i++){
        x[i] = tolower(x[i]);
        y[i] = tolower(y[i]);
    }

    if(x > y){
        cout << 1 << endl;
        return ;
    }
    else if(x == y){
        cout << 0 << endl;
        return;
    }
    cout << -1 << endl;


}
int main(){

    // int t;
    // cin >> t;
    int t = 1;
    while(t--){
        solve();
    }

    return 0;

}