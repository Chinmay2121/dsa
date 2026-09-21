#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[8]={1,4,4,6,3,3,3,3};
    int hash[50]={0};
    for(int i=0;i<8;i++){
        hash[arr[i]]=hash[arr[i]]+1;
    }
    int max=INT16_MIN;
    for(int i=0;i<10;i++){
        if(hash[i]>max){
            max=i;
        }
    }
    cout << max << endl;
}