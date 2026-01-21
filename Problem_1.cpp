//Insertion Sort-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    bool found = false;
    int last_val = arr[n-1];
    int sort_idx = 0;
    for(int i = n-2;i>=0;i--){
        sort_idx = i;
        if(arr[i]>last_val){
            arr[i+1] = arr[i];
            for(int i = 0;i<n;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else{
            found = true;
            break;
        }
    }
    if(found){
        arr[sort_idx+1] = last_val;
    }
    else{
        arr[0] = last_val;
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
