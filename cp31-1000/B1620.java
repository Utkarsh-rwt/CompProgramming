import java.util.Scanner;

public class B1620 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t > 0) {

            int w, h;
            w = sc.nextInt();
            h = sc.nextInt();

            int k1 = sc.nextInt();
            int start = 0;
            int end = 0;
            for (int i = 0; i < k1; i++) {
                if (i == 0)
                    start = sc.nextInt();
                else
                    end = sc.nextInt();
            }
            int lh = end - start;
            int k2 = sc.nextInt();

            for (int i = 0; i < k2; i++) {
                if (i == 0)
                    start = sc.nextInt();
                else
                    end = sc.nextInt();
            }
            lh = Math.max(lh, end - start);

            int k3 = sc.nextInt();
            for (int i = 0; i < k3; i++) {
                if (i == 0)
                    start = sc.nextInt();
                else
                    end = sc.nextInt();
            }
            int lv = end - start;
            int k4 = sc.nextInt();
            for (int i = 0; i < k4; i++) {
                if (i == 0)
                    start = sc.nextInt();
                else
                    end = sc.nextInt();
            }
            lv = Math.max(lv, end - start);
            long a = lh * (long) h;
            long b = lv * (long) w;

            if (a > b)
                System.out.println(a);
            else
                System.out.println(b);

            t--;
        }

        sc.close();

    }

}
