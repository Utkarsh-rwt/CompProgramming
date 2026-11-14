#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
   while(t--){
   
   int n ;
   cin>>n;

   vector <pair<int,int>> times(n+1,{0,0});
   for(int i =1 ; i<=n ;i++) {
     cin>>times[i].first;
     times[i].second = i;  
   }
   
   int posofhead = (n+1)/2;
   vector <int> pos (n+1,0);
   pos[0]=posofhead;
   
   sort(times.begin(),times.end());
   
   int i = posofhead-1;
   int j = posofhead +1;
   int l = n;
   long long ans =0;
   
   while(l>=1){
   int posof = times[l].second;
   pos[posof] = i;
   
   ans += abs(posofhead-i)*(
   (long long)times[l].first);
    
    l-=2;
    i--;  
   }
   l=n-1;
      
   while(l>=1){
   int posof = times[l].second;
   pos[posof] = j;
    ans += abs(posofhead-j)*((long long)times[l].first);
    
    l-=2;
    j++;  
   }
   
   cout<<2*ans<<"\n";
   for(int i =0;i<n ; i++){
     cout<<pos[i]<<" ";
   
   } 
  cout<<pos[n]<<"\n";

  }
  
  
    return 0;
}