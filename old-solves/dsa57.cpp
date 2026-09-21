#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    int even = 0;
    int odd = 0;
    for(int i = 0;i < n;i++){
        cin >> v[i];
        if(v[i]&1){
            odd++;
        }
        else{
            even++;
        }
    }
    int res = min(odd,even);
    if(res == odd){
        for(int i = 0;i < n;i++){
            if(v[i]&1){
                cout << i+1 << '\n';
                return ;
            }
        }
    }
    else{
        for(int i = 0;i < n;i++){
            if(!(v[i]&1)){
                cout << i+1 << '\n';
                return ;
            }
        }
    }


}
int main(){
    
    int t = 1;
    while(t--){
        solve();
    }

    return 0;

}