#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if( a == 0){
        return b;
    }
    return gcd(b%a,a);
}
void solve(){
    int a,b;
    cin >> a >> b;
    int m = (a*b) /gcd(a,b);
    cout << m << endl;
    
}
int main(){

    int t ;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}