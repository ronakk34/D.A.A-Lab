// Kadane will use is que. m

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int ans2 = 0;
        int max_val = INT_MIN;
        for(int i = 0;i<n;i++){
         cin >> a[i];
         max_val = max(max_val,a[i]);
         if(a[i]>0){
            ans2+=a[i];
         }
        }
        int curr_sum = a[0];
        int max_sum = a[0];
        for(int i = 1;i<n;i++){
            curr_sum = max(a[i],curr_sum+a[i]);
            max_sum = max(curr_sum,max_sum);  
        }
        if(ans2==0){
            ans2 = max_val;
        }
        cout << max_sum << " " << ans2 << endl;
    }
}
