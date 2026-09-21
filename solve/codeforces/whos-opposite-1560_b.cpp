// Link: https://codeforces.com/problemset/problem/1560/B


// ------------------ Code ------------------ //

#include<bits/stdc++.h>

// #include "../../templates/template.h"

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
    
    int a,b,c;
    cin >> a >> b >> c;

    int total = abs(a-b)*2;
    int opposite{};

    if(c > total/2){
        opposite = c - total/2;    
    }
    else{
        opposite = c + total/2;
    }

    if(total < a || total < b){
        cout << -1 << '\n';
        return;
    }
    if(opposite >= 1 && opposite <= total){
        cout << opposite << '\n';
    }
    else{
        cout << -1 << '\n';
    }


}

// ------------------ Main Driver ------------------ //

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    
    int t;
    cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}

