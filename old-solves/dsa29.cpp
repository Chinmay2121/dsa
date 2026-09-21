#include<bits/stdc++.h>
using namespace std;
void solve(){
    int s,n;
    cin >> s>> n;
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

    int flag = 1;
    for(int i=0;i<n;i++){
        if(v[i].first>=s){
            flag = 0;
            break;
        }
        else{
            s = s+v[i].second;
        }
    }
    if(flag ==0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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