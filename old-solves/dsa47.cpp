#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin >> v[i];
        sum = sum + v[i];
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int twin = 0;
    for(int i = n-1;i>=0;i--){
        if(sum-v[i] >= twin){
            cnt++;
            twin = twin+v[i];
            if(sum-twin < twin){
                break;
            }
        }
    }

    cout << cnt << endl;

}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}