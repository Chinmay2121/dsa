#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    
    int a,b,c;
    cin >> a >> b >> c;
    
    int sum = a+b+c;
    int low = min(a,min(b,c));
    if(sum - low >= 10){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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