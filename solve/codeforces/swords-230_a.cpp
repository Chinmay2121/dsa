#include<bits/stdc++.h>

// #include "../../templates/template.h"

//  PROBLEM LINK : https://codeforces.com/problemset/problem/230/A


#ifndef TEMPLATE_H
#define TEMPLATE_H
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 
const ll MOD = 1e9+7;
const int N = 1e5+5;
#endif

using namespace std;

void solve() {
    
    int s, n;
    cin >> s >> n;
    
    vector<pair<int,int>> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        return a.second > b.second;
    });
    int cnt = 0;
    for(int i = 0;i < n;i++ ){
        if(s >= v[i].first){
            s+=v[i].second;
            cnt++;
        }
    }

    if(cnt == n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }


}

// ------------------ Main Driver ------------------ //

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    
    int t = 1;
    // int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}

