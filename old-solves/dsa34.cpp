#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int result[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                result[i][j] = k;
            }
            else{
                result[i][j] = 0;
            }
        }
    }
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    } 
    
}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}