#include <bits/stdc++.h>
using namespace std;

void cp(){
    long long int n ;
    cin>>n ;
    
    //  lcm of a,b < is less a.b 
    // greater than equl to b 
    // so we prefer b%a==0 ;
    // now a+b = n 
    //       (a+b)%a=n%a
    // so n%a = 0 ;

    //  so for now we can find pairs in root n time complexity 
    //  to find lcm of those two at each step will take an extra log n complexity 
    //  root nlog n is not good

    // to minimise b we have to maximise a as b = n-a;
    // and to find largest a we can find smallest factor of n as n/i will be largest factor of n ;
    // so we find i >2 as b cannot be zero 

    long long a = 1;
    for(int i  = 2  ; (i*i)<=n ; i++ ){
        if(0==n%i) {
            a = n/i;
            break;
        }

    }

    cout<<a<< " "<<n-a<<"\n";




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