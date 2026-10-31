#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n , m;
    cin>>n>>m;
    string p,q;
    cin>>p;
    cin>>q;

    unordered_map <char,int> charsofp;

    for(int i = 0 ; i<n ; i++){
        charsofp[p[i]]++;
    }

    for(int i  = 0; i<m ;i++){
        if(charsofp.find(q[i]) != charsofp.end()){
            charsofp[q[i]]--;
            if(charsofp[q[i]]<0){
                cout<<"NO"<<"\n";
                return ;
            }
        }
        else {
             cout<<"NO"<<"\n";
                return ;
        }
    }


    int s=0,i=0,x=0;

    for(auto it : charsofp){
        if(it.first=='s') s+= it.second;
        else if(it.first=='i') i+= it.second;
        else if(it.first=='x') x+= it.second;
        else if(it.second!=0) {
            cout<<"No"<<"\n";
            return ;
        }

    }

    if(s==1 && (i==1 && x==1)){
        cout<<"Yes"<<"\n";

    }
    else {
        cout<<"No"<<"\n";
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