#include <bits/stdc++.h>
using namespace std;

void cp(){

    long long x , n ;

    cin>>x>>n ;
    long long ans = x;
    if(n==0){
        cout<<x<<'\n';
        return ;
    }
    
    if(x%2!=0){

        if(n%4==0) ;
        if(n%4==1) ans+=n;
        if(n%4==2) ans-=1;
        if(n%4==3) ans-=(n+1);

    }

    else {

        if(n%4==0) ;
        if(n%4==1) ans-=n;
        if(n%4==2) ans+=1;
        if(n%4==3) ans+=(n+1);


    }

    cout<<ans<<"\n";
    
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