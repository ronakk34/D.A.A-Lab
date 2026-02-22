#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int min_diff  = INT_MAX;
    for(int i = 0;i<n-1;i++){
        int diff = (arr[i+1]-arr[i]);
        if(diff<min_diff){
            min_diff = diff;
            ans.clear();
            ans.push_back(arr[i]);
            ans.push_back((arr[i+1]));
        }
        else if(diff==min_diff){
            ans.push_back(arr[i]);
            ans.push_back(arr[i+1]);
        }
    }
    for(int x:ans){
        cout << x << " ";
    }
    cout << endl;
}
