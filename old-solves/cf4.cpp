#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    
    int n;
    cin >> n;

    vector<pair<int,int> > v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < n-1;i++){
        if(v[i].first < v[i+1].first && v[i].second > v[i+1].second){
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;



}
int main(){
    // int t;
    // cin >> t;
    int t = 1;
    while(t--){
        solve();
    }

    return 0;

}