#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin >> n;
    int digits = log(n) + 1;
    int count = 0;
    while(n>0){
        int temp = n%10;
        if((temp == 4 || temp == 7)){
            n = n/10;
            count++;
        }
        else{
            n = n/10;
        }
    }
    if(count == 0){
        cout << "NO" << endl;
        return;
    }
    while(count){
        int temp = count%10;
        if(temp!=4 && temp!=7){
            cout << "NO" << endl;
            return;
        }
        count = count/10;
        
    }
    cout << "YES" << endl;
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