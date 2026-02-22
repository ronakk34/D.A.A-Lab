#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    string s;
    cin >> s;
    cin >> k;
    map<char,char> mp;
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int res_size = lower.size();
    k= k%res_size;
    int j = 0;
    for(int i = k;i<res_size;i++){
        mp[lower[j]] = lower[i];
        j++;
    }
    for(int i = 0;i<k;i++){
        mp[lower[j]] = lower[i];
        j++;
    }
    int y = 0;
    for(int i = k;i<res_size;i++){
        mp[upper[y]] = upper[i];
        y++;
    }
    for(int i = 0;i<k;i++){
        mp[upper[y]] = upper[i];
        y++;
    }
    string ans = "";
    for(char c:s){
        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            ans+=mp[c];
        }
        else{
            ans+=c;
        }
    }
    cout << ans << endl;
    
}