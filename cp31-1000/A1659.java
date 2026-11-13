import java.util.Scanner;

 class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

       int t ;
       t= sc.nextInt();

       while(t>0){
        int n,r,b;

        
        n=sc.nextInt();
        r=sc.nextInt();
        b=sc.nextInt();
         int slotofsize = r/(b+1); // b+1 is slots which can me made by b 
         int remainder = r%(b+1);
         
         if(remainder>0){
            slotofsize++;
         }

         

       
       


        while(b>0){
          if(r>=slotofsize) {
               for(int i  =0 ;i<slotofsize; i++){
                System.out.print("R");
               }
               r-=slotofsize;
               remainder--;
               if(remainder==0)slotofsize--;
          }
          else  {
            while(r>0){
                System.out.print("R");
                r--;

            }
          }
          System.out.print("B");
            b--;
        }
        while(r>0){
            System.out.print("R");
            r--;
        } 

        System.out.println();
        

        t--;
    }


        sc.close();
    }
}