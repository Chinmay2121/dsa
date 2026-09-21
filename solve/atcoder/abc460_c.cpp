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

    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    
    int i = 0, j = 0;
    int cnt = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    while(i < n && j < m){
        if(2*a[i] >= b[j]){
            i++;
            j++;
            cnt++;
        }
        else{

            i++;
        }
    }

    cout << cnt << '\n';
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

