
import java.util.Scanner;

public class C1506 {

    public  static void main (String args[]){
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();

        while(t>0){

            String a ,b ; 

            a = sc.next();
            b = sc.next();

            int x = a.length();
            int y = b.length();

            int common  = 0 ; 
            for(int i = 0 ; i<x ; i++){
                for(int j  = 0 ; j<y ; j++){
                    if(a.charAt(i)==b.charAt(j)){
                        int   p = i ;
                        int q = j ;
                        while((p<x && q<y )&& (a.charAt(p)==b.charAt(q))){
                            p++;
                            q++;
                        }
                        common = Math.max(common, p-i);
                    }
                }
            }


            System.out.println(x+y-2*common);

            t--;
        }
        sc.close();

        



    }
    
}
