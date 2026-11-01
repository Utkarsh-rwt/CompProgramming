#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    int k ; 
    cin>>n>>k;

    //simply sort on basis of remainder;
    //jinka remiader jyada hoga wo phle marenge except jinka zero wo sabse phle to zero ki remainder k 
    //but jab sort karega to same remainder hai agar to right wala index phle print hoga so take index as negative 
    vector < pair<long long int, int> > arr(n) ; // remainder and  index;

    for(int i  =0 ; i<n ; i++){

         long long x ;
         cin>>x;
         if(x%k==0)arr[i]={k , -(i+1)};
          else arr[i]={x%k , -(i+1)};
        
    }
    sort(arr.begin(), arr.end());
    for(int i  =n-1; i>=0 ; i--){
        cout<<abs(arr[i].second);
        if(i!=0)cout<<" ";
    }
    cout<<"\n";


    
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