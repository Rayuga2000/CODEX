//convert string to string array

import java.util.Scanner;

public class test{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String[] data=null;

        System.out.print("Enter: ");
        String input=sc.next();
        data=input.split(",");
        for(int i=0;i<data.length;i++){
            System.out.println(data[i]);
        }
    }
}