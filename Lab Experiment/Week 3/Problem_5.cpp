#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> ans1 = arr;
    vector<int> ans2 = arr;

    sort(ans1.begin(), ans1.end());
    sort(ans2.rbegin(), ans2.rend());

    int steps1 = 0, steps2 = 0;

    for(int i = 0;i<n;i++){
        if(arr[i] != ans1[i]) steps1++;
        if(arr[i] != ans2[i]) steps2++;
    }
    steps1=(steps1+1)/2;
    steps2 =(steps2+1)/2;
    int ans = min(steps1,steps2);
    cout << ans << endl;
}
