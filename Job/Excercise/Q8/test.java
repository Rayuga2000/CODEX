import java.io.*;
import java.util.*;

public class test{

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        double d = scan.nextDouble();
        scan.nextLine(); //removes the last '\n' character from the stdin so that the next nextLine() can read the new line as intended
        String s = scan.nextLine();
        scan.close();

        // Write your code here.

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}
