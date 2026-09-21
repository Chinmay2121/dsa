#include<bits/stdc++.h>
using namespace std;
bool palindrome(string& x,int i,int j){
    if(i>j){
        return true;
    }
    if(x[i]!=x[j]){
        return false;
    }
  
    return palindrome(x,i+1,j-1);
}
int main(){

    string x;
    cin>>x;

    cout << palindrome(x,0,x.size()-1) << endl;



    return 0;
}