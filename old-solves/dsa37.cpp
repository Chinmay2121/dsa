#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int so = 0,se=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            se = se + v[i];
        }
        else{
            so = so + v[i];
        }
    }
    cout << se-so << endl;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}