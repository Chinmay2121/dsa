#include<bits/stdc++.h>
using namespace std;
int power(int base,int n){
    
    if(n==0)
    {
        return 1;
    }
    return base*power(base,n-1);
}
int main(){
    int base;
    cin>>base;

    int n;
    cin>>n;

    cout<<power(base,n)<<endl;

    return 0;
}