#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    string x;
    cin >> x;
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(x[i+1] == '#' && x[i-1] == '#' && x[i] == '.'){
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}