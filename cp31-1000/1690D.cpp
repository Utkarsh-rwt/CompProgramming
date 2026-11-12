#include <bits/stdc++.h>
using namespace std;

void cp(){
    
    int n , k ;
    cin>>n>>k;

    string s ;
    cin>>s ;

    int i = 0;
    int j = 0 ;
    int wcount = 0;
    int ans =INT_MAX;
    if(s[j]=='W')wcount++;
    while(j < n){


        if(j-i+1==k){
          ans = min (wcount ,ans);
          j++;
          if(s[j]=='W')wcount++;
        } 
        else if(j-i+1<k){
            j++;
            if(s[j]=='W')wcount++;

        } 
        else{
            
            if(s[i++]=='W')wcount--;

        } 

    }

    cout<<ans <<"\n";

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