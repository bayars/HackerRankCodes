import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++)
            {
                String s1=sc.next();
                int x=sc.nextInt();
                int spacecnt = 15 - s1.length();
                System.out.println(s1 + addspace(spacecnt) + removezeros(x));
                //Complete this line
            }
            System.out.println("================================");

    }

    public static String removezeros(int x) {

            return String.format("%03d",x);
    }

        public static String addspace (int t) {
        String space= "";
        for(int z = 0; z<t;z++) {
            space = space +" ";
        }
        return space;
    }
}



