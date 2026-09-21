#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mini=INT16_MAX,maxi=INT16_MIN;
    for(int i=0;i<n;i++){
        mini = min(arr[i],mini);
        maxi = max(maxi,arr[i] - mini);

    }
    cout << maxi << endl;

    return 0;
}