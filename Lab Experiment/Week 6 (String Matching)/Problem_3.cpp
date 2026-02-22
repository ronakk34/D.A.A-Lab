#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v_s = {1, 3, 4, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49, 51, 52, 54, 55, 57, 58, 60, 61, 63, 64, 66, 67, 69, 70, 72, 73, 75, 76, 78, 79, 81, 82, 84, 85, 87, 88, 90, 91, 93, 94, 96, 97, 99};
    vector<int> v_o = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74, 77, 80, 83, 86, 89, 92, 95, 98};
    int val = n/3;
    int size = val*2;
    int rem = val;
    int val_s = size;
    int val_o = rem;
    for(int i = 0;i<size;i++){
        if(s[v_s[i]-1]=='S'){
            val_s--;
        }
    }
    for(int i =0;i<rem;i++){
        if(s[v_o[i]-1]=='O'){
            val_o--;
        }
    }
    cout << (val_s+val_o) << endl;
}