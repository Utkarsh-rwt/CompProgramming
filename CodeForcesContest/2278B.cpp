#include <bits/stdc++.h>
using namespace std;

void cp(){
    int x,y,z;

    cin>>x>>y>>z;

    int maxi = max(x,max(y,z));
    
    if(x==maxi){
        string s (x+y+z,'P');
        cout<<s<<"\n";
        return ;

    }
    else if(y==maxi){
        string s (x+y+z,'R');
        cout<<s<<"\n";
        return ;
        
    }
    else{
        string s (x+y+z,'S');
        cout<<s<<"\n";
        return ;

    }

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