// Insertion Sort 2 (whole array is unsorted)

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 1;i<n;i++){
        ll temp = arr[i];
        ll idx = i;
        for(int j = i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[idx] = arr[j];
                arr[j] = temp;
                idx--;
            }
            else{
                break;
            }
        }
        for(int x:arr){
            cout << x << " ";
        }
        cout << endl;
    }
}