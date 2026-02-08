#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> arr(n+1);
    for(int i = 1;i<=n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 1;i+d<=n;i++){
        vector<int> temp;
        int val = 0;
        for(int j = i;j<=i+d;j++){
            temp.push_back(arr[j]);
            val = arr[j+1];
        }
        sort(temp.begin(),temp.end());
        if(d&1){
            int median_val = temp[d/2+1];
            if(median_val*2>=val){
                ans++;
            }
            temp.clear();
        }
        else{
            int median_val = temp[d/2]+temp[d/2+1];
            if(median_val*2>=val){
                ans++;
            }
            temp.clear();
        }
    }
    cout << ans << endl;
}
