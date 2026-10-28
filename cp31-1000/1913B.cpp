#include <bits/stdc++.h>
using namespace std;

void cp(){
 string s ;
    cin>>s ;
     int ones = 0;
     int zeroes = 0 ;
     int n  = s.size();
     for(int i = 0; i<n ; i++){
        if(s[i]=='1') ones++;
        else zeroes ++;
     }


     for(int i  =0 ; i<n ;i++){
        if(s[i]=='1'){
            if(zeroes >0 ) zeroes--;
            else break;

        }
        else {
            if(ones >0 ) ones--;
            else break;
          
        }
     }

     cout<<ones+zeroes<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}