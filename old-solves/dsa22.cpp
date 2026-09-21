#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int sum = 0,maxSum=0,l=0,r=k-1;
    for(int i=0;i<k;i++){
        sum = sum + arr[i];
    }
    while(r<n){
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        maxSum = max(maxSum,sum);

    }
    cout << maxSum << endl;

    return 0;
}