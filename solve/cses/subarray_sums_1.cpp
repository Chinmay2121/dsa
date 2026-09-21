#include<bits/stdc++.h>
// #include "../../templates/template.h"

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 
const ll MOD = 1e9+7;
const int N = 1e5+5;


using namespace std;
void solve() {
        
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    int left = 0;
    int cur_sum = 0;
    int cnt = 0;
    for(int right = 0;right < n;right++){
        cur_sum+=v[right];
        while(cur_sum > k){
            cur_sum-=v[left];
            left++;
        }
        if(cur_sum == k){
            cnt++;
        }
    }

    cout << cnt << '\n';
}



int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    
    int t = 1;
    // cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }
 
    return 0;
}