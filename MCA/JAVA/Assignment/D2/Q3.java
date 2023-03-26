//Swap 2 numbers using call by value
import java.util.Scanner;

public class Q3{
    static int[] swap(int a,int b){
        a=a+b;
        b=a-b;
        a=a-b;

        int arr[]={a,b};
        return arr;
    }
    public static void main(String[] args){
        int arr[]=new int[2];
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the numbers: ");
        int a=sc.nextInt();
        int b=sc.nextInt();

        arr=swap(a,b);
        a=arr[0];
        b=arr[1];

        System.out.print("a: "+a+" b: "+b);
    }
}