#include<bits/stdc++.h>

// #include "../templates/template.h"
/* 

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second 

const ll MOD = 1e9+7;
const int N = 1e5+5;

*/

using namespace std;


// ------------------ Main Driver ------------------ //

void subset(vector<int> &v,int n,vector<int> &temp,int &cnt,int l,int r,int x,int i){
    if(i == n){
        
        if(temp.size() < 2) return;
        int hi = *max_element(temp.begin(),temp.end());
        int low = *min_element(temp.begin(),temp.end());
        int total = 0;
        for(int val : temp){
            total +=val;
        }
        if((hi - low >= x) && (total >= l && total <=r )){
            cnt++;
        }
        return;
    }
    temp.push_back(v[i]);
    subset(v,n,temp,cnt,l,r,x,i+1);
    temp.pop_back();
    subset(v,n,temp,cnt,l,r,x,i+1);

}

void solve() {
    
    int n;
    string s;
    cin >> n >> s;
    int m = 0;
    int a = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '+')
            m++;
        else
            m--;
        a = max(a, m);
    }
    cout << a << '\n';    


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
