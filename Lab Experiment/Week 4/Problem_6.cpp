#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> ans;
    for(int i = 0;i<n;i++) cin >> s[i];
    sort(s.rbegin(),s.rend());
    for(int i = 0;i<n-2;i++){
        if(s[i+2]+s[i+1]>s[i]){
            ans.push_back(s[i+2]);
            ans.push_back(s[i+1]);
            ans.push_back(s[i]);
            break;
        }
    }
    if(ans.size()==3){
        for(int x:ans){
            cout << x << " ";
        }
    }
    else{
        cout << "-1";
    }
    cout << endl;
    
}

