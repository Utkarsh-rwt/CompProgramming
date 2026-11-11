#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;
    vector <long long> arr(n+1,0);
    vector <int > ans (n+1,0);
    for(int i = 1; i<=n ; i++){
        cin>>arr[i];
    }

    if(n==1) {
        cout<<-1<<"\n";
        return ;
    }


    for(int i =1 ; i <=n;  ){
        if(i<n && arr[i]==arr[i+1]){
            int j = i;
            while(j <=n && arr[j]==arr[i])j++;
            ans[i]=j-1;
            while(i<j-1){
                ans[i+1]=i;
                i++;
            }

           i=j;

        }
        
        else {
            cout<<-1<<"\n";
            return ;
        }
    }
    
            for(int i = 1 ;  i <= n ;i++) cout<<ans[i]<<" ";

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