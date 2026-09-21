#include<bits/stdc++.h>
using namespace std;
void solve(){

    int y;
    cin >> y;

    string x;
    cin >> x;

    int z = 0,e = 0,r = 0,o = 0,n = 0;

    for(int i =0;i < y;i++){
        if(x[i] == 'z'){
            z++;
        }
        else if(x[i] == 'e'){
            e++;
        }
        else if(x[i] == 'r'){
            r++;
        }
        else if(x[i] == 'o'){
            o++;
        }
        else if(x[i] == 'n'){
            n++;
        }
    }

    int ones = n;
    int zeros = z;
    while(ones){
        cout << "1" << " ";
        ones--;
    }
    while(zeros){
        cout << "0" << " " ;
        zeros--;
    }
    cout << endl;


}
int main(){

    int t = 1;
    // int t;
    // cin >> t;
    while(t--){
        solve();
    }



}