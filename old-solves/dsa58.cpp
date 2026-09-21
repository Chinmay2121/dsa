#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;
    if(n <= 1){
        cout << 1 << endl;
        return;
    };
    int result = n,cnt = n;
    while(cnt > 1){

        result = result + cnt*(n-cnt)+1;
        cnt--;

    }

    cout << result<< endl;

}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
    
}