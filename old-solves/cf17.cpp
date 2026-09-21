#include<bits/stdc++.h>
using namespace std;
#define ll long long
void year(int n,int& flag){
    if(flag){
        return;
    }
    if(n == 0){
        flag = 1;
        return;
    }
    if(n < 0){
        flag = 0;
        return ;
    }
    year(n-2020,flag);
    year(n-2021,flag);
    

}
void solve(){

    int n;
    cin >> n;

    int flag = 0;
    year(n,flag);
    if(flag){
        cout << "YES" << endl;

    }
    else{
        cout << "NO" << endl;
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t = 1;

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}