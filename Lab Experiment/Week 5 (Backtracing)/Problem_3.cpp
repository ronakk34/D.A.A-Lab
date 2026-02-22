#include<bits/stdc++.h>
using namespace std;

int recur(vector<int> &ans,int i,int sum){
    if(sum==0) return 1;
    if(i == ans.size() || sum<0) return 0;
    int take = recur(ans,i+1,sum-ans[i]);
    int not_take = recur(ans,i+1,sum);
    return take+not_take;
}

int main(){
    int x;
    cin >> x;
    int n;
    cin >> n;
    vector<int> ans;
    int val = pow(x,1.0/n);
    for(int i = 1;i<=val;i++){
        ans.push_back(pow(i,n));
    }
    cout << recur(ans,0,x);  
}