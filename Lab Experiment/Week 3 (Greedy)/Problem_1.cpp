//Method 1-->>(can handle large k till 10^5)

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll sum  = 0;
    for(char c:s){
        sum+=(c-'0');
    }
    sum = sum*k;
    while(sum>=10){
        ll ans = 0;
        while(sum>0){
            ans+=sum%10;
            sum/=10;
        }
        sum = ans;
    }
    cout << sum << endl;
}


//Method 2-->>(Can handle k till 10^3)


// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main(){
//     string s;
//     cin >> s;
//     ll k;
//     cin >> k;
//     string temp = s;
//     while(k>1){
//         s+=temp;
//         k--;
//     }
//     while(s.size()>1){
//         ll sum = 0;
//         for(char c:s){
//             sum+=char(c-'0');
//         }
//         s = to_string(sum);
//     }
//     cout << s << endl;
// }


