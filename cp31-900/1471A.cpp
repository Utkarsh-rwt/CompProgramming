#include <bits/stdc++.h>
using namespace std;

void cp(){

    long long n , y;
    cin>>n>>y ;

    long long maxi = 0;
    long long sum = 0 ;
 
    for(int i=0 ; i<n ; i++){

        long long x ; 
        cin>>x;

        sum += x;
        maxi += ceil(double(x)/y);
    }

    // cout<<ceil(double(sum)/y)<<" "<<maxi<<"\n";
    //  you cannot print it directly 
    // `ceil()` returns a `double`, which may print large numbers in scientific notation. Storing the result in `long long` converts it to an integer before printing.
    // Both values are numerically equal: `1e+010` = `10000000000`. The issue was output formatting, not the algorithm or the result.

    long long mini  = ceil(double(sum)/y);
    cout<<mini<<" "<<maxi<<"\n";
    
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