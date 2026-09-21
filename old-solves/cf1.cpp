#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){

    int n;
    cin >> n;

    bool flag = true;
    
    int i;
    for(i = n+1;i <= 10000;i++){
        vector<int> hash(10,0);
        int temp = i;
        flag = true;

        while(temp){
        int rem = temp%10;
        
        hash[rem]++;
        if(hash[rem] > 1){
            flag = false;
            break;
        }

        temp = temp/10;
    }
    if(flag){
        cout << i << endl;
        break;
    }

}
    return 0;

}