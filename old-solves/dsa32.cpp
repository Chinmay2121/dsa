#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string x;
    cin >> x;

    int ones = 0;
    int zeroes = 0;
    
    for(int i=0;i<n;i++){
        if(x[i]=='1'){
            ones++;
        }
        else{
            zeroes++;
        }
    }   
    cout << abs(zeroes-ones) << endl;



}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}