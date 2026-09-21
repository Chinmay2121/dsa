#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n,m;
    cin >> n >> m;
    vector<int> v(m);
    for(int i = 0;i < m;i++){
        cin >> v[i];
    }
    ll count = v[0]-1;
    for(int i = 1;i < m;i++){
        if(v[i]<v[i-1]){
            count = count + n-v[i-1]+v[i];
        }
        else if(v[i] == v[i-1]){
            continue;
        }
        else{
            count = count + abs(v[i]-v[i-1]);
        }
    }
    cout << count << endl;


}
int main(){

    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}