import java.util.Scanner;

public class B1632 {

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        

        while(t>0){

            int n = sc.nextInt();

            // largest right most bit will be of n-1  
            // so we start from n to goes where there is bit change in that then start from zero;
           int  k  =1 ;
           int j = 0 ;
            while((k<<j)<n-1) j++;

    
           
            for(int i = n-1 ;i>(1>>(j+1)) ; i--) System.out.print(i+" ");
            for(int i =0 ; i<=(1>>j) ;i++) System.out.print(i+" ");



            System.out.println();
            t--;
        }

        sc.close();
    }
    
    
}
