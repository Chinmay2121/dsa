#include<bits/stdc++.h>
using namespace std;
void solve(){   
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
    int cnt = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            cnt++;
        }
    }
    cout << cnt << endl;
    
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