#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    for(int i = 0;i<k;i++) cin >> a[i];
    sort(a.begin(),a.end());
    vector<int> ans;
    int i = k-1;
    while(n!=1 && i>=0) {
        while(n%a[i]==0){
            ans.push_back(n);
            n=n/a[i];
        }
        i--;
    }
    if(n!=1){
        ans.clear();
        ans.push_back(-1);
        cout << ans[0] << endl;
        return 0;
    }
    ans.push_back(1);
    sort(ans.begin(),ans.end());
    for(int x:ans){
        cout << x << " ";
    }
    cout << endl;
    
}
