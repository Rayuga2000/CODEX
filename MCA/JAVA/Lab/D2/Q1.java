//Sum of elements of an array 
import java.util.Scanner;

public class Q1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0;

        System.out.print("Enter size of array: ");
        int n=sc.nextInt();
        int[] num=new int[n];

        System.out.print("Enter data: ");
        for(int i=0;i<n;i++){
            num[i]=sc.nextInt();
            sum+=num[i];
        }
        System.out.print("\nSum: "+sum);
    }
}
