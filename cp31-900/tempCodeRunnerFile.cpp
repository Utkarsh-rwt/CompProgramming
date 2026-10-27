#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n , y;
    cin>>n>>y ;

    long long maxi = 0;
    long long sum = 0 ;
 
    for(int i=0 ; i<n ; i++){

        int x ; 
        cin>>x;

        sum += x;
        maxi += ceil(double(x)/y);
    }

    cout<<sum/y<<" "<<ceil(double(maxi)/y)<<"\n";
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