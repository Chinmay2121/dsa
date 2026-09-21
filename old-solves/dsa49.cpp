#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n,m;
    cin >> n >> m;
    int sum = 0;
    
    int loop = n;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int i = 0;
    while(i<n){
        if(v[i] < 0 && m!=0){
            sum = sum + v[i];
            m--;
        }
        i++;
    }
    cout << sum*(-1) << endl;



}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}