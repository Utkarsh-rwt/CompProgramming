#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void cp(){
    int n ;
    cin>>n ;
    
    vector <pair<ll,ll>> minis(n); //storing first and second minis
    ll sum = 0;
    for( int i = 0 ; i<n ; i++){

        ll firstmini = __LONG_LONG_MAX__;
        ll secondmini = __LONG_LONG_MAX__;

        int m ;
        cin>>m;

        for(int j= 0 ; j<m ;j++){
            ll x;
            cin>>x ;

            if(x<firstmini){
                secondmini = firstmini;
                firstmini = x;
            }
            else if (x<secondmini){
                secondmini = x;
            }
        }

        minis[i]={firstmini,secondmini};
        sum+= secondmini;
    }
    

    ll smallestfirstmini = __LONG_LONG_MAX__;
    ll smallestsecondmini = __LONG_LONG_MAX__;
    for(int i  =0 ; i<n ;i++){
        if(smallestfirstmini> minis[i].first) smallestfirstmini =minis[i].first;
        if(smallestsecondmini> minis[i].second) smallestsecondmini =minis[i].second;

    }

    cout<<sum-smallestsecondmini+smallestfirstmini<<"\n";


    


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