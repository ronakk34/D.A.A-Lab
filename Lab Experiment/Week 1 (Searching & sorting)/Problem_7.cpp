
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        // int temp = 
        ll steps = 0;
        for(int i = 1;i<n;i++){
            ll temp = arr[i];
            ll idx = i;
            for(int j = i-1;j>=0;j--){
                if(temp<arr[j]){
                    steps++;
                    arr[idx] = arr[j];
                    arr[j] = temp;
                    idx--;
                }
                else{
                    break;
                }
            }
        }
        cout << steps << endl;
    }
}