#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n;
    vector <int> arr(n);
    vector <int> brr(n);

    for(int i  =0 ; i<n ;i++){
        cin>>arr[i];
    }

       for(int i  =0 ; i<n ;i++){
        cin>>brr[i];
    }

// calculate lenght of longest consecutive subarray for each value in both arrays  
    vector <int> continuous (2*n+1,0);          
    vector <int> secondcontinuous (2*n+1,0);
     
   int i  =0 ; 
   
   while(i<n){
    
   if(i<n-1 && arr[i]==arr[i+1]){
    int j = i;
    while(j <n && arr[j]==arr[i]) j++;
     continuous[arr[i]]=max(continuous[arr[i]],j-i);
     i=j;
   }
  else {
    continuous[arr[i]] = max(continuous[arr[i]],1);
    i++;
}
   }
   
   i=0;
   while(i<n){
    
   if(i<n-1 && brr[i]==brr[i+1]){
    int j = i;
    while(j <n && brr[j]==brr[i]) j++;
     secondcontinuous[brr[i]]=max(secondcontinuous[brr[i]],j-i);
     i=j;
   }
   else {
    secondcontinuous[brr[i]] = max(secondcontinuous[brr[i]], 1);
    i++;
}
   }


    int ans = 0 ;


    for(int i = 1 ; i<=2*n ;i++){
        ans=max(ans,(continuous[i]+secondcontinuous[i]));
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