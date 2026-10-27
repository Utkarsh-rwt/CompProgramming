#include <bits/stdc++.h>
using namespace std;

void cp(){

    string s ;
    cin>>s;

    int one = 0;
    int zero = 0;

    for(int i  =0 ; i<s.size(); i++){
        if(s[i]=='1') one++;
        else zero++;
    }

    int g = min (one,zero);
    if(g%2==0) cout << "NET"<<"\n";
    else cout<<"DA"<<"\n";

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