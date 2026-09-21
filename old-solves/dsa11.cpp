#include<bits/stdc++.h>
using namespace std;
int getBit(int x,int pos){
    int result=1<<pos;
    return (result^x);
}
int main(){

    int x;
    cin >> x;
    int pos=2;
    cout << getBit(x,pos) << endl;

    return 0;
}



