#include<bits/stdc++.h>
// #include "../../templates/template.h"

// #define ll long long
// #define pb push_back
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define fi first
// #define se second 
// const ll MOD = 1e9+7;
// const int N = 1e5+5;


using namespace std;
void solve() {
        
    int n;
    cin >> n;

    long long sum = 1LL*n*(n+1)/2;

    if(sum & 1){
        cout << "NO\n";
        return;
    }
    long long half = sum/2;
    vector<int> a,b;
    for(int i = n; i > 0; i--){
        if(half - i >= 0){
            a.push_back(i);
            half -= i;
        }
        else{
            b.push_back(i);
        }
    }
    cout << "YES\n";
    cout << a.size() << "\n";
    for(int i : a) cout << i << " ";
    cout << "\n";
    cout << b.size() << "\n";
    for(int i : b) cout << i << " ";
    cout << "\n";


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