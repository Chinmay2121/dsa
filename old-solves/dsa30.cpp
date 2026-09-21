#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int hash[d];
    memset(hash,0,d);
    int cnt = 0;
    for(int i=1;i<=d;i++){
          if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            hash[i] = 1;
            cnt++;
          }
          if(hash[i]==1){
            continue;
          }
    }
    cout << cnt << endl;


}
int main(){
    int t  = 1;
    while(t--){
        solve();
    }


    return 0;
}