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
    
    int n,m;
    cin >> n >> m;

    vector<int> vt(m+1);
    vector<int> vn(m+1);

    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        vt[a]++;
        vn[b]++;
    }
    for(int i = 1;i <= m;i++){

        cout << vn[i]-vt[i] << "\n";
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

