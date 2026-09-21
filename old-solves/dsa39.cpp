#include<bits/stdc++.h>
using namespace std;
void solve(){
    string x;
    cin >> x;


    transform(x.begin(),x.end(),x.begin(),::tolower);
    for(int i=0;i<1;i++){
        x[0] = x[0] - 32;
    }
    cout <<x << endl;

}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}