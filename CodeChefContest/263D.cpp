#include <bits/stdc++.h>
using namespace std;

void cp(){
        
        int n , m ;
        cin>>n>>m ;
        vector < string > arr(n);
        for(int i =0 ; i< n ; i++){
               cin>>arr[i];
        }
        
        int u  =  n  ;
        int d  =  -1 ;
        int r =   -1 ;
        int l =    n ;
        
        for(int i =0 ; i<n ;i++){
                for(int  j =0; j<m ; j++){
                        if(arr[i][j]=='1'){
                        u = min (u,i);
                        d = max(d,i);
                        l = min (l,j);
                        r = max(r,j);
                        }
                }
        }
        
        int area = (d-u+1)*(r-l+1);
       cout<<area<<"\n";
        
        
 
 

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