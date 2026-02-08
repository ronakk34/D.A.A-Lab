
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> c(n);
    for(int i = 0;i<n;i++){
        cin >> c[i];
    }
    sort(c.rbegin(),c.rend());
    ll ans = 0;
    for(int i = 0;i<n;i++){
        ans+=pow(2,i)*c[i];
    }
    cout << ans << endl;
}
