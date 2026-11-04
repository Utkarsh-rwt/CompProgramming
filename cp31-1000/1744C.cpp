#include <bits/stdc++.h>
using namespace std;

void cp(){
    string s ;
    int n ; 
    char x ;
    cin>>n>>x;
    cin>>s;

    int ans = 0 ;
    if(x=='g'){
        cout<<0<<'\n';
        return ;
    }
    

    for(int  i =0 ; i<n ; i++){
        if(s[i]==x){
            int j = i ;
            while(j<n && s[j]!='g') j++; // bich me koi bhi x aya to osse kam hi lega to ignore that

            if(j==n ) break ;
            else  ans = max(ans ,j-i );

            i=j;

        }
    }

    //for piche se
    int i  ;
    for(i =0; i<n ;i++){        
        if(s[i]=='g') break ;
    }

    //find last g from back 
    int k  =n-1;

    for(k=n-1;k>=0;k--){
        if(s[k]=='g')break;
    }

    // x shoudl be after this and it should be first x ;
    int j ;
    for(j=k;j<n;j++){
        if(s[j]==x)break;
    }



    if(j<n) ans = max(ans , i+(n-j));

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