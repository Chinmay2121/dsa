// Link: https://codeforces.com/problemset/problem/680/B


#include<bits/stdc++.h>
// #include "../../templates/template.h"

using namespace std;


#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 
const ll MOD = 1e9+7;
const int N = 1e5+5; 


void solve(){
    
    int n, a;
    cin >> n >> a;

    a--; 

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int cnt = 0;

    for(int i = 0; i < n; i++){

        int left = a - i;
        int right = a + i;
        if(left >= 0 && right < n){

            if(left == right){
                cnt += v[left];
            }
            else if(v[left] == 1 && v[right] == 1){
                cnt += 2;
            }
        }
        else if(left >= 0){
            cnt += v[left];
        }

        else if(right < n){
            cnt += v[right];
        }
    }

    cout << cnt << '\n';
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }

    return 0;
}