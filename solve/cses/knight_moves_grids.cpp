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

    vector<vector<int>> dist(n,vector<int>(n,-1));
    dist[0][0] = 0;
    queue<pair<int,int>> q;
    q.push({0,0});

    vector<int> dr = { 2,  2, -2, -2,  1,  1, -1, -1};
    vector<int> dc = { 1, -1,  1, -1,  2, -2,  2, -2};
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for(int i = 0;i < 8;i++){
            int nr = row + dr[i];
            int nc = col + dc[i];
            
            if(((nr < n) && (nr >= 0)) && ((nc < n) && (nc >= 0)) && (dist[nr][nc] == -1)){
                dist[nr][nc] = dist[row][col] + 1;
                q.push({nr,nc});
            }

        }

    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << dist[i][j] << " ";
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