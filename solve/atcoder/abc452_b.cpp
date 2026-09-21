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
    
    int h,w;
    cin >> h >> w;

    for(int i = 0;i < h;i++){
        if(i == 0 || i == h-1){
            for(int j = 0;j < w;j++){
                cout << "#";
            }
        }
        else{
            for(int j = 0;j < w;j++){
                if(j == 0 || j == w-1){
                    cout << "#";
                }
                else{
                    cout <<".";
                }
            }
        }
        cout << '\n';
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

