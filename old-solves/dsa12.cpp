#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={10, 20, 20};
    int pre[100000]={0};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        pre[arr[i]]+=1;

    }
    for(int i=0;i<100000;i++){
        if(pre[i]!=0){
            cout << i << " " << pre[i] << endl;
        }
    }

    return 0;
}