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
        
    int n,k;
    cin >> n >> k;

    vector<pair<int,int>> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(),v.end());
    int i = 0,j = n-1;
    while(i < j){
        if((v[i].first)+(v[j].first) == k){
            cout << v[i].second+1 <<" " << v[j].second+1<< '\n';
            return;
        }
        else if((v[i].first)+(v[j].first) < k){
            i++;
        }
        else{
            j--;
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