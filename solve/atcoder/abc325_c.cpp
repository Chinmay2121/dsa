#include<bits/stdc++.h>

// #include "templates/template.h"

using namespace std;

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

// ------------------ Main Driver ------------------ //

void solve() {
    
    int h, w;
    cin >> h >> w;

    vector<string> grid(h);
    for(int i = 0;i < h;i++){
        cin >> grid[i];
    }


    int cnt = 0;

    queue<pair<int,int>> q;
    vector<vector<bool>> vis(h, vector<bool>(w, false));

    vector<int> dr = {-1, -1, -1, 0, 1, 1, 1, 0};
    vector<int> dc = {-1, 0, 1, 1, 1, 0, -1, -1};
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(grid[i][j] == '#' && !(vis[i][j])){
                cnt++;
                q.push({i, j});
                vis[i][j] = true;
                while(!q.empty()){
                    auto [row, col] = q.front();
                    q.pop();

                    for(int k = 0;k < 8;k++){
                        int nr = row + dr[k];
                        int nc = col + dc[k];

                        if(nr < h && nr >= 0 && nc < w && nc >= 0 && !vis[nr][nc] && grid[nr][nc] == '#'){
                            q.push({nr, nc});
                            vis[nr][nc] = true;
                        }
                    }
                }


            }
        }
    }

    cout << cnt << '\n';
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // int t; cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}