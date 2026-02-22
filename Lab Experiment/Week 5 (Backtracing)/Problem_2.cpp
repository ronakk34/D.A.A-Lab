#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll q;
    cin >> q;
    while(q--){
        ll n,m;
        cin >> n >> m;
        ll val = n;
        vector<ll> s(m);
        for(int i = 0;i<m;i++) cin >> s[i];
        sort(s.rbegin(),s.rend());
        vector<ll> anss;
        ll ans = 0;
        ll may_be = 1;
        for(int i = 0;i<m;i++){
            if(n%s[i]==0 && s[i]!=n){
                if(n==val){
                    anss.push_back(n/s[i]);
                }
                else{
                    anss.push_back((n/s[i]*may_be));
                }
                may_be*=(n/s[i]);
                n = s[i];
                
            }
        }
        ll sum  =0;
        bool found = false;
        if(anss.size()>=1){
            found = true;
        for(int i = 0;i<anss.size()-1;i++){
            sum+=anss[i];
        }
        }
        if(found){
            cout << sum+1 << endl;
        }
        else{
            
        cout << sum << endl;
        }
    }
    
}
