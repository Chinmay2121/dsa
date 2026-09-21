#include<bits/stdc++.h>
using namespace std;
int main(){

    string x;
    getline(cin,x);
    string a=" ";

    for(int i=0;i<x.size();i++){
        a = x[i] + a;
    }
    cout <<a << endl;

    return 0;
}