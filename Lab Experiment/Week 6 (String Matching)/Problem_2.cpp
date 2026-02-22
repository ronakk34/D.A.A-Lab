#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   string s;
   cin >> s;
   int digit = 0;
   int small = 0;
   int big = 0;
   int special = 0;
   for(int i = 0;i<n;i++){
    if(s[i]>='A' && s[i]<='Z' && big<1){
        big++;
    }
    if(s[i]>='a' && s[i]<='z' && small<1){
        small++;
    }
    if(s[i]>='0' && s[i]<='9' && digit<1){
        digit++;
    }
    if(!((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')) && special<1){
        special++;
    }
 }
 int req = 4-(big+small+digit+special);
 if(n<6){
    if((n+req)>=6){
        cout << req << endl;
    }
    else{
    int ans = 6-(n+req);
    cout << ans+req << endl;
 }
 }
 else{
    cout << req << endl;
 }
}