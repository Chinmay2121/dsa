#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ;i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int maxi = v[v.size()-1];
    int count = 0;
    for(int i = 0 ;i < n;i++){
        count = count + (maxi - v[i]);

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