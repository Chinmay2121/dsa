#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int t;
    cin>>t;
    while(t--){

        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((b || d)==0){
            cout<<"Undefined"<<endl;
            break;
        if((a/b)==(c/d)){
            cout<<0<<endl;
            continue;
}
        }
        for(int i=1;i<100000;i++){
            if((a/b)*i==(c/d)){
                count++;
                break;
            }
            
            else if((c/d)*i==(a/b)){
                count++;
                break;
            }
        }
 }
    cout<<count<<endl;
    return 0;




}





    
