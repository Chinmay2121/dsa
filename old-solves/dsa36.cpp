#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,k;
    cin >> n >> k;
    int gold = 0;
    vector<int> v;

    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
        
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            gold = gold+v[i];
        }
        else if(v[i] == 0){
            ;
            if(gold>0){
                v[i]++;
                gold-=1;
                cnt++;
            }
            else{
                continue;
            }
            
        }
    }
    cout << cnt << endl;

}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}
