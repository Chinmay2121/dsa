#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,a,b;
    cin >> n >> a >> b;
    

    int result = b%n;
    if(result<0){
        result = result + n;
    }
    result = result+a;
    if(result>n){
        result = result - n;
    }
    cout << result << endl;



}
int main(){
    int t = 1;
    while(t--){
        solve();
    }



    return 0;
}