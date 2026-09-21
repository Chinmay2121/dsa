#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    int maxi = max(a,max(b,c));
    int mini = min(a,min(b,c));
    cout << sum - maxi - mini << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }



    return 0;
}