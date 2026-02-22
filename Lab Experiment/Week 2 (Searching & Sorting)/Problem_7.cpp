
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0;i<m;i++) cin >> b[i];
    map<int,int> mpa;
    map<int,int> mpb;
    for(int x:a){
        mpa[x]++;
    }
    for(int x:b){
        mpb[x]++;
    }
    vector<int> ans;
    for(auto &it:mpb){
        int val = it.first;
        int cntb = it.second;
        int cnta = mpa[val];
        if(cntb>cnta){
            int diff = cntb-cnta;
            while(diff--){
                ans.push_back(val);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int x:ans){
        cout << x << " ";
    }
    cout << endl;
    
}
