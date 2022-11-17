import java.util.*;
import java.io.*;

public class code{
    static void reverse(String name){
        Stack stk=new Stack();
        Stack stk1=new Stack();

        for(int i=0;i<name.length();i++)
        {
            stk.push(name.charAt(i));
        }
        for(int i=0;i<name.length();i++)
        {
            stk1.push(stk.pop());
        }

        System.out.println("The Reverse of the String is: "+stk1);
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);

        System.out.print("Enter your Name: ");
        String name=in.nextLine();

        reverse(name);
    }
}