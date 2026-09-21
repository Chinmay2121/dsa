#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin>>a>>b>>c;
        cout<<endl;
        if((a+b)==c || ((a+c)==b)|| (b+c)==a){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }    





    }
 

    return 0;
}