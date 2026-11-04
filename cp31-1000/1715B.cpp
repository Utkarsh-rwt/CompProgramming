#include <bits/stdc++.h>
using namespace std;

void cp(){

    long long n,k,b,s ;
    cin>>n>>k>>b>>s;

    if(s < b*k  || (s > (k*b)+(k-1)*n)){
        cout<<-1<<"\n";
        return ;
    }
    
     long long left = s-(b*k) ;
     long long p = 0;

        if(left>0 && left>=k) {
            left-=(k-1);
            p = k-1;
        }
        else if (left>0 && left<k){
            p = left;
            left-=left;
        }
     
       cout<<b*k+p<<" ";

       for(int i  = 1 ; i<n ; i++){
         long long p = 0;

        if(left>0 && left>=k) {
            left-=(k-1);
            p = k-1;
        }
        else if (left>0 && left<k){
            p = left;
            left-=left;
        }

        if(i==n-1){
            cout<<p<<"\n";

        }
        else cout<<p<<" ";
           
       }


    

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