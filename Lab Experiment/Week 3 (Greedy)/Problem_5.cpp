/////---Without prefix sum bhi kr skte pr prefix sum to prefix sum hai hahahaha---/////

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> l(n);
    vector<ll> t(n);
    for(int i = 0;i<n;i++) cin >> l[i] >> t[i];
    
    ll ans = 0;
    for(int i = 0;i<n;i++){
        if(t[i]==0){
            ans+=l[i];
            l[i] =0;
        }
    }
    sort(l.rbegin(),l.rend());
    vector<ll> pref(n+1,0);
    pref[1] = l[0];
    for(int i = 2;i<=n;i++ ){
        pref[i] = pref[i-1]+l[i-1];
    }
    ll wanna = pref[k];
    ll not_want = pref[n]-pref[k];
    ans+=wanna-not_want;
    cout << ans << endl;
}
