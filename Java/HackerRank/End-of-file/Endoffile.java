package hackerank;

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT.
         *  Your class should be named Solution. */
    	Scanner t = new Scanner(System.in);
    	int z = 1;
    	while(t.hasNext()){
        	String p = t.nextLine();
    		System.out.println(z + " " + p);
    		z++;
    	}
    
    }
}
