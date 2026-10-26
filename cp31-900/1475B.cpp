#include <bits/stdc++.h>
using namespace std;

void cp(){

    long long n ;
    cin>>n ;

if((n%2)!=0) {
    cout<<"YES"<<"\n";
    return ;
}

while(n>0){
    n/=2;
    if((n%2)!=0 && n!=1){
        cout<<"YES"<<"\n";
        return ;
    }
}

cout<<"NO"<<"\n";
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