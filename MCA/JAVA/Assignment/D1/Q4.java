//Sum of the digits of a given number
import java.util.Scanner;

public class Q4{
    public static void main(String[] args){
        int num,sum=0;
        Scanner sc=new Scanner(System.in);


        System.out.print("Enter Number: ");
        num=sc.nextInt();

        while(num>0){
            sum+=num%10;
            num/=10;
        }
        System.out.print("Sum of Digits: "+sum);
    }
}
