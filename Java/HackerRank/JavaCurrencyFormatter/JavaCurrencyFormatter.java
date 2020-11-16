import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

       
        NumberFormat tkl = NumberFormat.getCurrencyInstance(new Locale("zh", "CN"));
        String china = tkl.format(payment);
        NumberFormat tkl1 = NumberFormat.getCurrencyInstance(new Locale("en", "US"));
        String us = tkl1.format(payment);
        NumberFormat tkl2 = NumberFormat.getCurrencyInstance(new Locale("fr", "FR"));
        String france = tkl2.format(payment);
        NumberFormat tkl3 = NumberFormat.getCurrencyInstance(new Locale("zh", "CN"));
        String india = tkl3.format(payment);

        // Write your code here.
        
        System.out.println("US: " + us);
        System.out.println("India: " + "Rs."+ india.substring(1,india.length()));
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}