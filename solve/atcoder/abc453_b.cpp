#include<bits/stdc++.h>

// #include "../templates/template.h"


#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 

const ll MOD = 1e9+7;
const int N = 1e5+5;



using namespace std;


// ------------------ Main Driver ------------------ //



void solve() {
    
    int t,x;
    cin >> t >> x;

    vector<int> a(t+1);
    for(int i = 0;i <= t;i++){
        cin >> a[i];
    }

    map<int,int> mp;
    mp[0] = a[0];
    int cur = 0;
    for(int i = 1;i <= t;i++){
        if(abs(mp[cur]-a[i]) >= x){
            mp[i] = a[i];
            cur = i;
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << '\n';
    }




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

