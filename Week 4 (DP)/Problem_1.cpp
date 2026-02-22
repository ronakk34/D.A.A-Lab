//DP recursive use hoga...-->>>



#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll c[52];
ll n;
ll table[52][252];
bool cal[52][252];

ll solve(int i,ll need){
    if(need<0){
        return 0;
    }
    if(need == 0){
        return 0;
    }
    if(i>n){
        return 0;
    }
    if(cal[i][need] == false){
        table[i][need] = solve(i,need-c[i])+solve(i+1,need);
        cal[i][need] = true;
    }
}
int main(){
    ll n,need;
    cin >> need >> n;
    vector<ll> c(n);
    for(int i = 1;i<=n;i++){
        cin >> c[i];
    }
    cout << solve(1,need) << endl;
    
}
