#include <bits/stdc++.h>
using namespace std;

void cp(){

   long long  n  , p ;
    cin>>n>>p;
    vector <pair<int,int> > arr(n);

    for(int i  =0  ; i<n ;i++){
        cin>>arr[i].second;   // no of shares
    }

       for(int i  =0  ; i<n ;i++){
        cin>>arr[i].first;     // cost 
      }


       sort(arr.begin(), arr.end());


     long long  c =1 ;
      long long cost = p ;
      
      long long  i  =0 ;
      while(c<n && (i<n && arr[i].first< p)){
          
       long long  x = arr[i].second;
        if(c+x<=n) cost+= arr[i].first*x;
        else cost += (n-c)*arr[i].first;

        c+= arr[i].second ;
        i++;
      }

      if(c<n) cost += (n-c)*(long long) p;

      cout<<cost<<"\n";


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long long  t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}