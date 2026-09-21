#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<string> op;
    int result = 0;
    int temp = n;
    while(temp--){
        string y;
        cin >> y;
        op.push_back(y);
    }
    for(int i=0;i<n;i++){
        if(op[i] == "X++"){
            result++;
        }
        else if(op[i] == "++X"){
            ++result;
        }
        else if(op[i] == "--X"){
            --result;
        }
        else{
            result--;
        }
    }
    cout << result << endl;
}
int main(){

    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}