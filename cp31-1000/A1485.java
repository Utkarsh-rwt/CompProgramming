import java.util.Scanner;


public class A1485 {

    public static long mypow (long x , long n){
        if(n==0) return 1 ;
        if(n==1) return x ;

        if(n%2==0) return mypow(x*x , n/2);
        else return x*mypow(x, n-1);

    }
    
    public static void main (String arg[]){
     Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); 

        while(t>0){

            long a,b ;
            a  = sc.nextLong();
            b = sc.nextLong();

        
            int extra  =0 ; 
            if (b==1) {
                b++;
                extra++;
              
            }

            int prevpower = 1 ;

    
            int i = 0 ;
            while( mypow(b, prevpower)   <= a ) prevpower++;
            int ans = prevpower+extra;

            while(i<=30){
               
                int curr  = 1 ;
                 while(mypow(b+i, curr) <= a) curr++;
                 ans = Math.min(i+extra+curr , ans);

                 prevpower = curr;
                 i++;
            }   

        
        
                System.out.println(ans);

            t--;
        }
        sc.close();
    }
}
