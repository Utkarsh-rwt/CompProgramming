    #include <bits/stdc++.h>
    using namespace std;

    void cp(){
        long long  a , b ; 
        cin>>a>>b ;

    if (a == b) {
            cout << 0 << " " << 0 << "\n";
            return;
        }
    

    long long  x = 0 ;
    long long  difference = abs(a-b) ;
    long long count = 0;
    long long rem  = a%difference;


    if(rem< difference - rem ){
        count = rem ;

    }
    else count = difference - rem ;
    
    

    cout<<difference<<" "<<count<<"\n";
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




    /// forgot to decrease wala option take min of two
    