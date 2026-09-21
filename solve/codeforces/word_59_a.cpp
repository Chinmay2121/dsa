// Link: https://codeforces.com/contest/59/problem/A 


// ------------------ Code ------------------ //

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
    
    string s;
    cin >> s;

    int n = s.size();
    int low = 0, up = 0;

    for(int i = 0;i < n;i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            low++;
        }
        else{
            up++;
        }
    }
    int flag = low >= up;

    for(int i = 0;i < n;i++){
        if(flag){
            s[i] = tolower(s[i]);
        }
        else{
            s[i] = toupper(s[i]);
        }
    }

    cout << s << '\n';
    

}

// ------------------ Main Driver ------------------ //

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // int t;
    // cin >> t;
    while(t--){
        solve();
    }


    return 0;
    
}