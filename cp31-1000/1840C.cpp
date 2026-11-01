#include <bits/stdc++.h>
using namespace std;

void cp(){
    long long  n ,k,q;
cin>>n>>k>>q;

vector <long long > arr(n);
for(int i  =0 ; i<n ;i++){
    cin>>arr[i];
}

int i  =0 ;
int j  =0 ; 
long long sum  =0 ;
while(j<n){
    if(arr[i]<=q){
        while(j<n && arr[j]<=q) j++;
        int l = j-i;
        if(l>=k){
           long long  diff = l-k+1;  // think from subarray pov , if started from first index you can lenght - minium +1 subarrays 
           sum+= ((diff+1)*diff)/2;     // then eventually from every after starting pos it decrease by one 

        }
        i=j;
    }
    else {
        i++;
        j++;
    }

}

cout<<sum<<"\n";


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