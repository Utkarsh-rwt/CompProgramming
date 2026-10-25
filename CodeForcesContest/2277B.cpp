#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n , k ;
    cin>>n>>k;

    vector <int> arr(n);
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    int  x=0 ; 
  
    for(int i = 0 ; i< n ; i++){
        int maxi = INT_MIN;

       if(i+k < n ){
        for(int j = i ; j<i+k ; j++ ){
            maxi = max(maxi, arr[j]);
        }
     
        if(x!=maxi){
            cout<<x<<"\n";
            return ;
        }
        x++;
          
       
       }

        i= i+k;
        i--;
    }
  
    cout<<x<<"\n";
    return ;

  
    

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