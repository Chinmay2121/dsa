#include<bits/stdc++.h>
// #include "../../templates/template.h"

#define ll long long
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define fi first
// #define se second

const ll MOD = 1e9+7;
const int N = 1e5+5;

using namespace std;
void solve() {
        
    int n,sum;
    cin >> n >> sum;

    vector<pair<int,int>> v(n);
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        v[i] = {x,i};
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < n;i++){
        int fix = i;
        int l = i+1,r = n-1;
        while(l < r){
            long long s = v[fix].first + v[l].first + v[r].first;
            if(s == sum){

                cout << v[fix].second+1 << " " << v[l].second + 1 << " " << v[r].second + 1 << '\n';
                return;
            }
            else if(s < sum){
                l++;
            }
            else{
                r--;
            }
        }   
    }
    cout << "IMPOSSIBLE\n";
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t = 1;
    // cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }
 
    return 0;
}