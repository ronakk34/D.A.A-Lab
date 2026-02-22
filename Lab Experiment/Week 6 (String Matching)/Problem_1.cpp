
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long n = s.size();
    long long ans = 0;
    for(int i = 0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            ans++;
        }
    }
    cout << ans+1 << endl;
}
