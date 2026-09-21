#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int len = 0,mlen=0,row = -1; 

    for(int i=0;i<n;i++){
        len = 0;
        for(int j=0;j<m;j++){
            if(arr[i][j] == 1){
                len++;
                mlen = max(len,mlen);
                row = i; 
            }
        }
    }
    cout << mlen << endl;
    cout << row << endl;


    return 0;
}