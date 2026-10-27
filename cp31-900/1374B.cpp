#include <bits/stdc++.h>
using namespace std;

void cp(){


    long long int n ;
    cin>>n ;

    if(n==1) {
        cout<<0<<"\n";
        return ;
    }

    long long t1 = n;
    long long t2 = n ;
    int c1 = 0 ;
    int c2 = 0 ;
 
    while(t1%2==0){
        t1/=2;
        c1++;
    }

    while(t2%3==0){
        t2/=3;
        c2++;
    }

    if(c2<c1){
        cout<<-1<<"\n";
        return ;
    }

    if(c2==c1 && n>=6){
        cout<<0<<"\n";
        return ;
    }

    n = n * (1<<(c2-c1));

    int c = 0;
    while(n%6==0){
        n/=6;
        c++;
    }

    if(n==1) {
        cout<<c+c2-c1<<"\n";
        return ;
    }

    cout<<-1<<"\n";



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