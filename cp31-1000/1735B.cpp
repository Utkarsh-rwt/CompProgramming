#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    long long d ;

    cin>>n>>d ;
    vector <long long int> p(n);

    for(int i =0 ; i<n ; i++) cin>>p[i];

    sort(p.begin(),p.end());

    int ans = 0 ;
    int i = -1 ;
    int j = n-1;

    while(i<j){
        
        long long power = p[j];
        while((i<j-1) && (power<=d)) {
             i++;
             power+=p[j];
        }

       if(power>d) ans++;
       j--;

    }
    //180
    //90 80 70 60 50 100
    //-- 50 70 60 80 90 100

    cout<<ans<<"\n";



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    // cin >> t;
    t=1;

    while(t--) {
cp();
    }

    return 0;
}