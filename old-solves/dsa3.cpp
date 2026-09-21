#include<bits/stdc++.h>   
using namespace std;
int main(){

    int a=0;
    int b=1;
    int n;
    int c=0;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    
    return 0;
}