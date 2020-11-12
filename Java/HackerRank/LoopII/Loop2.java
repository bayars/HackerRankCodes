import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
       Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int[] ans = new int[n];
            for(int z = 0 ; z < n; z++){
                ans[z] = (int) (Math.pow(2,z) * b);
            }
            int k= a;
            for(int p = 0; ans.length > p; p ++) {
                k += ans[p]; 
                System.out.print(k+ " ");
            }
                        System.out.println();

        }
        
        in.close();
    }

}
