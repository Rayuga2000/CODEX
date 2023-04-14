import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter Number: ");
        int n=sc.nextInt();

        System.out.print("Multiplication table: ");
        for(int i=1;i<=n;i++){
            System.out.println(n+"x"+i+" : "+(n*i));
        }
    }
}
