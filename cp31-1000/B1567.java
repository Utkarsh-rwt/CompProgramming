
    import java.util.Scanner;

    public class B1567 {

        public static  void main(String args[]){

            int t ;
            Scanner sc = new Scanner(System.in);
            t = sc.nextInt();

            while(t>0){

                int a = sc.nextInt();
                int b = sc.nextInt();

                int prevxor = 0;

                int size = a ; // values less than a including zero ;

                if((a-1) % 4 == 0) prevxor = a-1;
                if((a-1) % 4 == 1) prevxor = 1;
                if((a-1) % 4 == 2) prevxor = a ;
                if((a-1) % 4 == 3) prevxor = 0;

                if(a==1)prevxor=0;

                if(prevxor==b){
                    System.out.println(size);
                    t--;
                    continue;
                }

                int x = prevxor^b;
            
                if(x<a || x>a) {
                System.out.println(size+1);
                }
                else System.out.println(size+2);


                t--;
            }
            
            sc.close();

        }

    }