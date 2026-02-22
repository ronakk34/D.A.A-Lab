// Will gonna out of bound because its more than long long so use string method or use another method...-->>>
// below code will work for very small test cases for big test case give ans in -ve(out of bound) ..-->>>>


#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    int t1,t2,n;
    cin >> t1 >> t2 >> n;
    int size = 20;
    vector<ll>ans(size+1,0);
    ans[1] = t1;
    ans[2] = t2;
    for(int i = 3;i<=20;i++){
        ans[i] = ans[i-2]+ans[i];
    }
    cout << ans[n] << endl;
}
