

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max_val = 0;
    vector<pair<int,string >> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i].first >> arr[i].second;
        max_val = max(max_val,arr[i].first);
    }
    int first_half = n/2;
    for(int i = 0;i<first_half;i++){
        arr[i].second = "-";
    }
    vector<int> freq(max_val+1,0);
    for(int i = 0;i<n;i++){
        freq[arr[i].first]++;
    }
    vector<int> pref(max_val+1);
    pref[0] = freq[0];
    for(int i = 1;i<=max_val;i++){
        pref[i] = pref[i-1]+freq[i];
    }
    vector<pair<int,string>> ans(n);
    for(int i = n-1;i>=0;i--){
        ans[pref[arr[i].first]-1] = arr[i];
        pref[arr[i].first]--;

    }
    for(int i = 0;i<n;i++){
        cout << ans[i].second << " ";
    }
    cout << endl;
    
}


