#include <bits/stdc++.h>
using namespace std;

void cp(){


    long long n,x ;
    cin>>n>>x;
    vector <long long > arr (n);
    for(int i  = 0 ; i<n ;i++) cin>>arr[i];

    long long s = arr[0];
    long long l = arr[0];
 int count = 0;
    for(int i  =0 ; i<n ; i++){
        if(s>arr[i])s=arr[i];
        if(l<arr[i])l=arr[i];

        if((l-s)>2*x){
             l=arr[i];
             s=arr[i];
             count ++;
        }
        
    }

    cout<<count<<"\n";


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