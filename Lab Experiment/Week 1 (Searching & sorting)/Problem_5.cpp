// Counting Sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int max_val = INT_MIN;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        max_val = max(max_val,arr[i]);
    }
    vector<int> freq(max_val+1,0);
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
    }
    vector<int> pref(max_val+1);
    pref[0] = freq[0];
    for(int i = 1;i<=max_val;i++){
        pref[i] = pref[i-1]+freq[i];
    }
    vector<int> ans(n);
    for(int i = n-1;i>=0;i--){
        ans[pref[arr[i]]-1] = arr[i];
        pref[arr[i]]--;
    }
    for(int x:ans){
        cout << x << " ";
    }
    cout << endl;


}