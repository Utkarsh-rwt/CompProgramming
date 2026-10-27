#include <bits/stdc++.h>
using namespace std;

void cp(){
int n,k ;
cin>>n>>k ;
vector <long long int > arr ((n*k)+1,0);


for(int i =1 ; i<=n*k ; i++){
    cin>>arr[i];

}

int pos = ceil(double(n)/2);
int skipfromright = n-pos; 

int start = (n*k) - skipfromright;

long long ans = 0 ;

while(k--){
    ans+=arr[start];
    start-=(skipfromright+1);
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