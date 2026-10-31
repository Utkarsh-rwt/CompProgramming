#include <bits/stdc++.h>
using namespace std;

void cp(){
int n ;
cin>>n ;

vector <long long > arr(n);
for(int i = 0 ;i< n ;i++) cin>>arr[i];


vector <long long> diff (n-1);
int ans = 0;

for(int i = 0 ; i<n-1; i++) {
    diff[i]=arr[i]-arr[i+1];
    if(diff[i]==0) ans++;
}


//+2 
for(int i = 0; i<n-1-1 ; i++){
        
        if(diff[i]==1 && diff[i+1]==0){
                i++;
                while(i<n-2 &&  diff[i]==0) i++;
                
                if(diff[i]==-1){ 
                        ans += 2 ;
                        cout<<ans<<"\n";
                        return ;
                  }
                  i--;
                 
        }
        
}





//+1
for(int i =0; i<n-1 ; i++){
    if(diff[i]==-1 || (i<n-2 && (diff[i]==1 && diff[i+1]==0))){
          ans += 1 ;
          cout<<ans<<"\n";
          return ;
    }
}



          cout<<ans<<"\n";
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