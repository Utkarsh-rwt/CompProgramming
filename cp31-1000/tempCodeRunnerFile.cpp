#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    int k ;
    cin>>n ;
    cin>>k;

    int ans = k;
    vector <int> arr (n);

    for(int i  =0 ; i<n ; i++){
         cin>>arr[i];

    if(k!=4){
        int x = arr[i];

        if(x%k==0)ans=0;
        ans = min (ans,(k-x%k));
    }

    }

    if(k==4){
    int eves = 0;

    for(int i =0  ;i<n ;i++){
        if(arr[i]%2==0) eves++;

    }

    if(eves==0) ans=2;
    if(eves==1) ans=1;

}


    cout<<ans<<"\n";

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