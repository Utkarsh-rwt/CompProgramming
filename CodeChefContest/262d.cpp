#include <bits/stdc++.h>
using namespace std;

void cp(){

     int n , k ;
     cin>>n>>k ;

    string s ;
    cin>>s;
    int ans = 0;
    if(k!=0){
    for(int i  =0 ; i<n ; i++){
        if(s[i]=='1'){
         i+=k;
         ans ++ ;
         i--;
        }
    }
}

else {
    for(auto c :s) {
        if(c=='1')ans++;
    }
     }

    cout<<ans<<"\n";
    return  ;


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