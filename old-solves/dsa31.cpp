#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int cnt =1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            break;
        }
        else{
            cnt++;
        }
    }
    if(cnt>(n-cnt)){
        cout << v[0] << endl;
    }
    else{
        cout << v[n-1] << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}