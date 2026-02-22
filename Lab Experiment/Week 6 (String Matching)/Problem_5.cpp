#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        string ans = "hackerrank";
        int j = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]==ans[j]){
                j++;
            }
        }
        if(j==10){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
