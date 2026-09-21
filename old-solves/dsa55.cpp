#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;
    int count = 0;
    count = n%5;
    n = n - count;
    vector<int> v ={5,10,20,100};
    int i = v.size()-1;
    while(n){
        if((n/v[i])!=0){
            n = n -v[i];
            count++;
        }
        else{
            i--;
        }
    }
    cout << count << endl;


}

int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;

}