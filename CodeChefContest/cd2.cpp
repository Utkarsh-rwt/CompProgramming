#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    string s ;

    cin>>n ;
    cin>>s ;
     int ans = 0;
    for(int i =0 ; i<n-2 ; i++){

         if(s[i]==s[i+1] && s[i+1]==s[i+2]){
          ans++;
          i=i+2;
         } 
    }

    cout<<ans<<"\n";
    return ;





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