#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n ;
    long long sum=0 ;
    vector <int> arr(n);
    
    for(int i =0 ; i<n  ; i++){
        cin>>arr[i];
        sum+= arr[i];
    }

    bool contiones = false  ;
    int i =1 ;
    while(i <n-1){
        if(arr[i]!=1){
            contiones=false;
            break ;
        }
        else contiones=true ;
        i++;
    }

    if(n==2 && (arr[0]==1 && arr[1]==1)) cout<<-1<<"\n";
    else if(contiones && (arr[0]==1 && arr[n-1]==1)) cout<<-1<<"\n";
    else if(contiones) cout<<arr[0]+arr[n-1]-1<<'\n';
    else cout<< sum - 1 <<"\n";

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