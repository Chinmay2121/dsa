#include<bits/stdc++.h>
using namespace std;
inline void solve(){
    int n;
    cin >> n;
    bool flag = 0;
    for(int i = 4;i <=n;i = i+4){
        if(i == n){
            flag = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if(!flag){
        cout << "NO" << endl;
        return;
    }
    int even = 0,odd = 0;
    for(int i = 2;i <=n;i+=2){
        cout << i << " ";
        even+=i;
    }
    for(int i = 1;i < n-2;i+=2){
        cout << i <<  " ";
        odd+=i;
    }
    cout <<(even-odd) ;
    cout << endl;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}