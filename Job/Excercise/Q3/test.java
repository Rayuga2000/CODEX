import java.util.*;

public class test{
    private static void printName(String name){
        System.out.print("Hello "+name+", Nice to meet you!");
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter Full Name: ");
        String str=sc.nextLine();
        sc.close();

        printName(str);
    }
}